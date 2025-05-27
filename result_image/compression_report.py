import numpy as np
import matplotlib.pyplot as plt
from PIL import Image
import os
from scipy.fftpack import dctn, idctn
import cv2
from skimage.metrics import structural_similarity as ssim
from matplotlib.gridspec import GridSpec

def load_image(image_path):
    """Load image and convert to both RGB and YCbCr"""
    pil_img = Image.open(image_path)
    rgb_array = np.array(pil_img.convert('RGB'))
    ycbcr_array = np.array(pil_img.convert('YCbCr'))
    return rgb_array, ycbcr_array

def perform_dct(channel):
    """Perform 2D DCT transformation"""
    return dctn(channel, norm='ortho')

def visualize_dct(dct_result):
    """Prepare DCT result for visualization (log scale)"""
    dct_log = np.log(np.abs(dct_result) + 1)
    dct_norm = (dct_log - np.min(dct_log)) / (np.max(dct_log) - np.min(dct_log))
    return dct_norm

def quantize_dct(dct_coeffs, quality=50):
    """Simulate JPEG quantization with a quality factor"""
    # Standard JPEG quantization matrix for quality=50
    y_quant_table = np.array([
        [16, 11, 10, 16, 24, 40, 51, 61],
        [12, 12, 14, 19, 26, 58, 60, 55],
        [14, 13, 16, 24, 40, 57, 69, 56],
        [14, 17, 22, 29, 51, 87, 80, 62],
        [18, 22, 37, 56, 68, 109, 103, 77],
        [24, 35, 55, 64, 81, 104, 113, 92],
        [49, 64, 78, 87, 103, 121, 120, 101],
        [72, 92, 95, 98, 112, 100, 103, 99]
    ])
    
    # Scale based on quality (lower quality = higher quantization)
    if quality < 50:
        scale = 5000 / quality
    else:
        scale = 200 - 2 * quality
    
    quant_matrix = np.floor((y_quant_table * scale + 50) / 100)
    quant_matrix = np.clip(quant_matrix, 1, 255)
    
    # Resize quantization matrix if needed
    h, w = dct_coeffs.shape
    if h != 8 or w != 8:
        quant_matrix = cv2.resize(quant_matrix, (w, h), interpolation=cv2.INTER_NEAREST)
    
    # Apply quantization
    quantized = np.round(dct_coeffs / quant_matrix) * quant_matrix
    
    return quantized

def compute_metrics(original, compressed):
    """Compute image quality metrics"""
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

def calculate_compression_ratio(orig_dct, comp_dct, threshold=0.1):
    """Calculate effective compression ratio based on DCT coefficients"""
    # Count non-zero coefficients
    orig_nonzeros = np.sum(np.abs(orig_dct) > threshold)
    comp_nonzeros = np.sum(np.abs(comp_dct) > threshold)
    
    # Calculate ratio
    if comp_nonzeros > 0:
        ratio = orig_nonzeros / comp_nonzeros
    else:
        ratio = float('inf')
    
    # Calculate percentage of zeroed coefficients
    total_coeffs = orig_dct.size
    orig_zero_percent = (total_coeffs - orig_nonzeros) / total_coeffs * 100
    comp_zero_percent = (total_coeffs - comp_nonzeros) / total_coeffs * 100
    
    return {
        'ratio': ratio,
        'original_zeroes_percent': orig_zero_percent,
        'compressed_zeroes_percent': comp_zero_percent,
        'original_nonzeros': orig_nonzeros,
        'compressed_nonzeros': comp_nonzeros
    }

def generate_report(original_path, compressed_path, output_dir='compression_report'):
    """Generate a comprehensive compression report"""
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)
    
    # Load images
    orig_rgb, orig_ycbcr = load_image(original_path)
    comp_rgb, comp_ycbcr = load_image(compressed_path)
    
    # Print image shapes
    print(f"Original image shape: {orig_rgb.shape}")
    print(f"Compressed image shape: {comp_rgb.shape}")
    
    # Initialize figure for the report
    fig = plt.figure(figsize=(16, 20))
    gs = GridSpec(12, 4, figure=fig)
    
    # Title
    fig.suptitle('JPEG Compression Analysis Report', fontsize=20)
    
    # Original vs Compressed RGB images
    ax_orig = fig.add_subplot(gs[0:2, 0:2])
    ax_orig.imshow(orig_rgb)
    ax_orig.set_title('Original Image')
    ax_orig.axis('off')
    
    ax_comp = fig.add_subplot(gs[0:2, 2:4])
    ax_comp.imshow(comp_rgb)
    ax_comp.set_title('Compressed Image')
    ax_comp.axis('off')
    
    # YCbCr channels comparison
    channel_names = ['Y', 'Cb', 'Cr']
    channel_results = {}
    dct_ratios = {}
    
    # Overall metrics
    metrics = compute_metrics(orig_rgb, comp_rgb)
    
    # Add metrics text box
    metrics_text = (
        f"Image Quality Metrics:\n"
        f"MAE: {metrics['MAE']:.2f}\n"
        f"MSE: {metrics['MSE']:.2f}\n"
        f"PSNR: {metrics['PSNR']:.2f} dB\n"
        f"SSIM: {metrics['SSIM']:.4f}"
    )
    
    ax_metrics = fig.add_subplot(gs[2, 0:4])
    ax_metrics.axis('off')
    ax_metrics.text(0.5, 0.5, metrics_text, 
                   horizontalalignment='center',
                   verticalalignment='center',
                   fontsize=12,
                   bbox=dict(boxstyle="round,pad=0.5", facecolor='aliceblue', alpha=0.5))
    
    # Process each YCbCr channel
    for i, channel_name in enumerate(channel_names):
        # Extract channels
        orig_channel = orig_ycbcr[:, :, i]
        comp_channel = comp_ycbcr[:, :, i]
        
        # Compute DCT
        orig_dct = perform_dct(orig_channel)
        comp_dct = perform_dct(comp_channel)
        
        # Calculate compression ratio
        dct_ratio = calculate_compression_ratio(orig_dct, comp_dct)
        dct_ratios[channel_name] = dct_ratio
        
        # Row position for this channel
        row_pos = 3 + i * 3
        
        # Original channel
        ax_orig_ch = fig.add_subplot(gs[row_pos, 0])
        ax_orig_ch.imshow(orig_channel, cmap='gray')
        ax_orig_ch.set_title(f'Original {channel_name}')
        ax_orig_ch.axis('off')
        
        # Compressed channel
        ax_comp_ch = fig.add_subplot(gs[row_pos, 1])
        ax_comp_ch.imshow(comp_channel, cmap='gray')
        ax_comp_ch.set_title(f'Compressed {channel_name}')
        ax_comp_ch.axis('off')
        
        # Original DCT
        ax_orig_dct = fig.add_subplot(gs[row_pos, 2])
        orig_dct_vis = visualize_dct(orig_dct)
        ax_orig_dct.imshow(orig_dct_vis, cmap='viridis')
        ax_orig_dct.set_title(f'Original {channel_name} DCT')
        ax_orig_dct.axis('off')
        
        # Compressed DCT
        ax_comp_dct = fig.add_subplot(gs[row_pos, 3])
        comp_dct_vis = visualize_dct(comp_dct)
        ax_comp_dct.imshow(comp_dct_vis, cmap='viridis')
        ax_comp_dct.set_title(f'Compressed {channel_name} DCT')
        ax_comp_dct.axis('off')
        
        # DCT difference
        ax_diff = fig.add_subplot(gs[row_pos+1, 0:2])
        diff = np.abs(orig_dct - comp_dct)
        diff_vis = visualize_dct(diff)
        im = ax_diff.imshow(diff_vis, cmap='hot')
        ax_diff.set_title(f'{channel_name} DCT Difference')
        ax_diff.axis('off')
        plt.colorbar(im, ax=ax_diff, fraction=0.046, pad=0.04)
        
        # Channel metrics text
        channel_metrics_text = (
            f"{channel_name} Channel Compression:\n"
            f"Original Non-Zero DCT Coeffs: {dct_ratio['original_nonzeros']} ({100-dct_ratio['original_zeroes_percent']:.1f}%)\n"
            f"Compressed Non-Zero DCT Coeffs: {dct_ratio['compressed_nonzeros']} ({100-dct_ratio['compressed_zeroes_percent']:.1f}%)\n"
            f"Compression Ratio: {dct_ratio['ratio']:.2f}x"
        )
        
        ax_ch_metrics = fig.add_subplot(gs[row_pos+1, 2:4])
        ax_ch_metrics.axis('off')
        ax_ch_metrics.text(0.5, 0.5, channel_metrics_text, 
                          horizontalalignment='center',
                          verticalalignment='center',
                          fontsize=10,
                          bbox=dict(boxstyle="round,pad=0.5", facecolor='honeydew', alpha=0.5))
    
    # Calculate overall compression ratio
    total_orig_nonzeros = sum(dct_ratios[ch]['original_nonzeros'] for ch in channel_names)
    total_comp_nonzeros = sum(dct_ratios[ch]['compressed_nonzeros'] for ch in channel_names)
    overall_ratio = total_orig_nonzeros / total_comp_nonzeros if total_comp_nonzeros > 0 else float('inf')
    
    # Add overall compression ratio text
    overall_text = (
        f"Overall Compression Analysis:\n"
        f"Total Original Non-Zero DCT Coefficients: {total_orig_nonzeros}\n"
        f"Total Compressed Non-Zero DCT Coefficients: {total_comp_nonzeros}\n"
        f"Overall Compression Ratio: {overall_ratio:.2f}x\n"
        f"File Size Reduction: {(1 - 1/overall_ratio) * 100:.1f}% (theoretical)"
    )
    
    ax_overall = fig.add_subplot(gs[row_pos+2, 0:4])
    ax_overall.axis('off')
    ax_overall.text(0.5, 0.5, overall_text, 
                   horizontalalignment='center',
                   verticalalignment='center',
                   fontsize=12,
                   bbox=dict(boxstyle="round,pad=0.5", facecolor='lavender', alpha=0.5))
    
    # Save the report
    plt.tight_layout(rect=[0, 0, 1, 0.97])
    plt.savefig(f'{output_dir}/compression_report.png', dpi=150)
    plt.close()
    
    print(f"Compression report saved to {output_dir}/compression_report.png")
    
    # Print key metrics to console
    print("\nCompression Summary:")
    print(f"Overall Compression Ratio: {overall_ratio:.2f}x")
    print(f"PSNR: {metrics['PSNR']:.2f} dB")
    print(f"SSIM: {metrics['SSIM']:.4f}")
    print(f"Theoretical Size Reduction: {(1 - 1/overall_ratio) * 100:.1f}%")
    
    return {
        'metrics': metrics,
        'dct_ratios': dct_ratios,
        'overall_ratio': overall_ratio
    }

if __name__ == "__main__":
    generate_report("8x8input.jpeg", "8x8output.jpeg") 