import numpy as np
import cv2
from PIL import Image
from scipy.fftpack import dctn
import os
import matplotlib.pyplot as plt
from skimage.metrics import structural_similarity as ssim

def load_image(image_path):
    """Load image and convert to both RGB and YCbCr"""
    pil_img = Image.open(image_path)
    rgb_array = np.array(pil_img.convert('RGB'))
    ycbcr_array = np.array(pil_img.convert('YCbCr'))
    return rgb_array, ycbcr_array

def compute_dct_sparsity(img_channel):
    """Compute sparsity in DCT domain (percentage of near-zero coefficients)"""
    dct_result = dctn(img_channel, norm='ortho')
    # Count coefficients close to zero (using a small threshold)
    threshold = 0.1  # Lower threshold for small images
    zero_count = np.sum(np.abs(dct_result) < threshold)
    total_count = dct_result.size
    sparsity = zero_count / total_count * 100
    return sparsity, dct_result

def compute_information_metrics(original, compressed):
    """Compute various metrics to measure information loss"""
    # Convert to float for calculations
    original = original.astype(np.float32)
    compressed = compressed.astype(np.float32)
    
    # Mean Absolute Error
    mae = np.mean(np.abs(original - compressed))
    
    # Mean Squared Error
    mse = np.mean((original - compressed) ** 2)
    
    # Peak Signal-to-Noise Ratio
    max_pixel = 255.0
    psnr = 10.0 * np.log10((max_pixel ** 2) / mse) if mse > 0 else float('inf')
    
    # SSIM (Structural Similarity Index)
    # Convert back to uint8 for SSIM calculation
    orig_uint8 = original.astype(np.uint8)
    comp_uint8 = compressed.astype(np.uint8)
    
    # Handle small images for SSIM
    if original.shape[0] < 7 or original.shape[1] < 7:
        ssim_value = 0  # SSIM not reliable for very small images
    else:
        ssim_value = ssim(orig_uint8, comp_uint8, multichannel=True, channel_axis=2)
    
    return {
        'MAE': mae,
        'MSE': mse,
        'PSNR': psnr,
        'SSIM': ssim_value
    }

def compute_entropy(img_channel):
    """Compute Shannon entropy of an image channel"""
    hist = cv2.calcHist([img_channel.astype(np.uint8)], [0], None, [256], [0, 256])
    hist = hist / hist.sum()
    non_zero_probs = hist[hist > 0]
    entropy = -np.sum(non_zero_probs * np.log2(non_zero_probs))
    return entropy

def plot_dct_coefficients(orig_dct, comp_dct, channel_name, output_dir='compression_analysis'):
    """Plot DCT coefficients and their differences"""
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)
    
    fig, axes = plt.subplots(1, 3, figsize=(15, 5))
    
    # Plot original DCT coefficients
    im0 = axes[0].imshow(np.log(np.abs(orig_dct) + 1), cmap='viridis')
    axes[0].set_title(f'Original {channel_name} DCT')
    plt.colorbar(im0, ax=axes[0])
    
    # Plot compressed DCT coefficients
    im1 = axes[1].imshow(np.log(np.abs(comp_dct) + 1), cmap='viridis')
    axes[1].set_title(f'Compressed {channel_name} DCT')
    plt.colorbar(im1, ax=axes[1])
    
    # Plot absolute difference
    diff = np.abs(orig_dct - comp_dct)
    im2 = axes[2].imshow(np.log(diff + 1), cmap='hot')
    axes[2].set_title(f'{channel_name} DCT Difference')
    plt.colorbar(im2, ax=axes[2])
    
    plt.tight_layout()
    plt.savefig(f'{output_dir}/{channel_name}_dct_comparison.png')
    plt.close()

def calculate_quantization_effect(orig_dct, comp_dct):
    """Calculate the effect of quantization on DCT coefficients"""
    # Count zeroed coefficients
    zero_threshold = 0.1
    orig_zeroed = np.sum(np.abs(orig_dct) < zero_threshold)
    comp_zeroed = np.sum(np.abs(comp_dct) < zero_threshold)
    
    # Calculate high frequency loss
    # Define high frequency as coefficients in the bottom right quadrant
    h, w = orig_dct.shape
    h_mid, w_mid = h // 2, w // 2
    
    orig_high_freq = orig_dct[h_mid:, w_mid:]
    comp_high_freq = comp_dct[h_mid:, w_mid:]
    
    high_freq_loss = np.sum(np.abs(orig_high_freq)) - np.sum(np.abs(comp_high_freq))
    high_freq_loss_percent = (high_freq_loss / np.sum(np.abs(orig_high_freq))) * 100 if np.sum(np.abs(orig_high_freq)) > 0 else 0
    
    return {
        'Original Zeroed Coeffs': orig_zeroed,
        'Compressed Zeroed Coeffs': comp_zeroed,
        'New Zeroed Coeffs': comp_zeroed - orig_zeroed,
        'High Freq Loss (%)': high_freq_loss_percent
    }

def analyze_compression(original_path, compressed_path, output_dir='compression_analysis'):
    """Analyze compression between original and compressed images"""
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)
        
    # Load images
    orig_rgb, orig_ycbcr = load_image(original_path)
    comp_rgb, comp_ycbcr = load_image(compressed_path)
    
    # Print image shapes
    print(f"Original image shape: {orig_rgb.shape}")
    print(f"Compressed image shape: {comp_rgb.shape}")
    
    # Compute overall information metrics
    info_metrics = compute_information_metrics(orig_rgb, comp_rgb)
    
    # Analyze YCbCr channels
    channel_names = ['Y', 'Cb', 'Cr']
    channel_results = {}
    quant_results = {}
    
    for i, channel_name in enumerate(channel_names):
        orig_channel = orig_ycbcr[:, :, i]
        comp_channel = comp_ycbcr[:, :, i]
        
        # Calculate DCT sparsity
        orig_sparsity, orig_dct = compute_dct_sparsity(orig_channel)
        comp_sparsity, comp_dct = compute_dct_sparsity(comp_channel)
        
        # Plot DCT coefficients
        plot_dct_coefficients(orig_dct, comp_dct, channel_name, output_dir)
        
        # Calculate quantization effects
        quant_results[channel_name] = calculate_quantization_effect(orig_dct, comp_dct)
        
        # Calculate entropy
        orig_entropy = compute_entropy(orig_channel)
        comp_entropy = compute_entropy(comp_channel)
        
        # Calculate DCT energy preservation
        orig_energy = np.sum(np.abs(orig_dct))
        comp_energy = np.sum(np.abs(comp_dct))
        energy_ratio = comp_energy / orig_energy if orig_energy > 0 else 0
        
        channel_results[channel_name] = {
            'Original Sparsity (%)': orig_sparsity,
            'Compressed Sparsity (%)': comp_sparsity,
            'Sparsity Change (%)': comp_sparsity - orig_sparsity,
            'Original Entropy': orig_entropy,
            'Compressed Entropy': comp_entropy,
            'Entropy Change (%)': ((comp_entropy / orig_entropy) - 1) * 100 if orig_entropy > 0 else 0,
            'Energy Preservation (%)': energy_ratio * 100
        }
    
    # Compute overall compression ratio based on DCT coefficients
    # Count all non-zero DCT coefficients before and after compression
    total_orig_nonzeros = sum(orig_ycbcr.shape[0] * orig_ycbcr.shape[1] - quant_results[ch]['Original Zeroed Coeffs'] for ch in channel_names)
    total_comp_nonzeros = sum(comp_ycbcr.shape[0] * comp_ycbcr.shape[1] - quant_results[ch]['Compressed Zeroed Coeffs'] for ch in channel_names)
    
    dct_compression_ratio = total_orig_nonzeros / total_comp_nonzeros if total_comp_nonzeros > 0 else float('inf')
    
    # Compute overall compression ratio based on information content
    total_orig_entropy = sum(channel_results[ch]['Original Entropy'] for ch in channel_names)
    total_comp_entropy = sum(channel_results[ch]['Compressed Entropy'] for ch in channel_names)
    
    entropy_compression_ratio = total_orig_entropy / total_comp_entropy if total_comp_entropy > 0 else float('inf')
    
    # Visualize the images and their YCbCr channels
    fig, axes = plt.subplots(2, 4, figsize=(16, 8))
    
    # Display original and compressed RGB images
    axes[0, 0].imshow(orig_rgb)
    axes[0, 0].set_title('Original Image')
    axes[0, 0].axis('off')
    
    axes[1, 0].imshow(comp_rgb)
    axes[1, 0].set_title('Compressed Image')
    axes[1, 0].axis('off')
    
    # Display YCbCr channels
    for i, channel_name in enumerate(channel_names):
        axes[0, i+1].imshow(orig_ycbcr[:, :, i], cmap='gray')
        axes[0, i+1].set_title(f'Original {channel_name}')
        axes[0, i+1].axis('off')
        
        axes[1, i+1].imshow(comp_ycbcr[:, :, i], cmap='gray')
        axes[1, i+1].set_title(f'Compressed {channel_name}')
        axes[1, i+1].axis('off')
    
    plt.tight_layout()
    plt.savefig(f'{output_dir}/image_comparison.png')
    plt.close()
    
    # Print results
    print("=" * 50)
    print("Compression Analysis Results")
    print("=" * 50)
    
    print("\nInformation Metrics:")
    for metric, value in info_metrics.items():
        print(f"{metric}: {value:.4f}")
    
    print(f"\nDCT Coefficient Compression Ratio: {dct_compression_ratio:.4f}")
    print(f"Entropy-based Compression Ratio: {entropy_compression_ratio:.4f}")
    
    print("\nChannel Analysis:")
    for channel, metrics in channel_results.items():
        print(f"\n{channel} Channel:")
        for metric, value in metrics.items():
            print(f"  {metric}: {value:.4f}")
        
        # Print quantization effects
        print(f"\n  Quantization Effects:")
        for metric, value in quant_results[channel].items():
            if isinstance(value, float):
                print(f"    {metric}: {value:.4f}")
            else:
                print(f"    {metric}: {value}")
    
    # Calculate overall quality assessment
    if info_metrics['PSNR'] > 0:
        # Normalize PSNR between 0 and 100
        # Typical PSNR values for compressed images range from 20 to 50 dB
        normalized_psnr = min(100, max(0, (info_metrics['PSNR'] - 20) * (100 / 30))) if info_metrics['PSNR'] < 50 else 100
        quality_score = normalized_psnr
    else:
        quality_score = 0
    
    if quality_score > 95:
        quality_assessment = "Excellent (minimal visible differences)"
    elif quality_score > 90:
        quality_assessment = "Very Good (slight differences)"
    elif quality_score > 80:
        quality_assessment = "Good (noticeable but acceptable differences)"
    elif quality_score > 70:
        quality_assessment = "Fair (visible artifacts)"
    elif quality_score > 60:
        quality_assessment = "Poor (significant degradation)"
    else:
        quality_assessment = "Very Poor (severe degradation)"
    
    print("\nOverall Quality Assessment:", quality_assessment)
    print(f"Quality Score: {quality_score:.2f}/100")
    
    return {
        'info_metrics': info_metrics,
        'channel_results': channel_results,
        'quant_results': quant_results,
        'dct_compression_ratio': dct_compression_ratio,
        'entropy_compression_ratio': entropy_compression_ratio,
        'quality_assessment': quality_assessment,
        'quality_score': quality_score
    }

if __name__ == "__main__":
    analyze_compression("8x8input.jpeg", "8x8output.jpeg") 