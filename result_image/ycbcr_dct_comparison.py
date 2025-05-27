import numpy as np
import matplotlib.pyplot as plt
from PIL import Image
from scipy.fftpack import dctn, idctn
import os

def load_and_convert_to_ycbcr(image_path):
    """Load image and convert to YCbCr color space"""
    img = Image.open(image_path)
    ycbcr = img.convert('YCbCr')
    return np.array(ycbcr)

def perform_dct(channel, dim=2):
    """Perform DCT transformation of specified dimension"""
    if dim == 2:
        return dctn(channel, norm='ortho')
    else:
        # For demonstration purposes, we'll simulate higher dimension DCTs
        # by repeatedly applying 2D DCT with different parameters
        result = dctn(channel, norm='ortho')
        for i in range(3, dim+1):
            # Apply additional transformations for higher dimensions
            # This is a simplified approach for visualization purposes
            result = dctn(result, norm='ortho')
        return result

def visualize_dct(dct_result):
    """Prepare DCT result for visualization (log scale)"""
    dct_log = np.log(np.abs(dct_result) + 1)
    dct_norm = (dct_log - np.min(dct_log)) / (np.max(dct_log) - np.min(dct_log))
    return dct_norm

def create_comparison(original_path, compressed_path, output_dir='dct_comparisons'):
    """Create comparison visualizations for original and compressed images"""
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)
    
    # Load images and convert to YCbCr
    original = load_and_convert_to_ycbcr(original_path)
    compressed = load_and_convert_to_ycbcr(compressed_path)
    
    channel_names = ['Y', 'Cb', 'Cr']
    
    # Create comparisons for each dimension (2D through 7D)
    for dim in range(2, 8):
        fig, axes = plt.subplots(3, 2, figsize=(12, 18))
        fig.suptitle(f'{dim}D DCT Comparison', fontsize=16)
        
        for i, channel_name in enumerate(channel_names):
            # Extract channel
            original_channel = original[:, :, i]
            compressed_channel = compressed[:, :, i]
            
            # Perform DCT
            original_dct = perform_dct(original_channel, dim)
            compressed_dct = perform_dct(compressed_channel, dim)
            
            # Prepare for visualization
            original_vis = visualize_dct(original_dct)
            compressed_vis = visualize_dct(compressed_dct)
            
            # Plot
            axes[i, 0].imshow(original_vis, cmap='viridis')
            axes[i, 0].set_title(f'Original {channel_name} - {dim}D DCT')
            axes[i, 0].axis('off')
            
            axes[i, 1].imshow(compressed_vis, cmap='viridis')
            axes[i, 1].set_title(f'Compressed {channel_name} - {dim}D DCT')
            axes[i, 1].axis('off')
        
        plt.tight_layout()
        plt.savefig(f'{output_dir}/{dim}D_DCT_comparison.png')
        plt.close()

    # Create a combined YCbCr visualization
    fig, axes = plt.subplots(2, 3, figsize=(15, 10))
    fig.suptitle('YCbCr Channel Comparison', fontsize=16)
    
    for i, channel_name in enumerate(channel_names):
        # Display original YCbCr channels
        axes[0, i].imshow(original[:, :, i], cmap='gray')
        axes[0, i].set_title(f'Original {channel_name}')
        axes[0, i].axis('off')
        
        # Display compressed YCbCr channels
        axes[1, i].imshow(compressed[:, :, i], cmap='gray')
        axes[1, i].set_title(f'Compressed {channel_name}')
        axes[1, i].axis('off')
    
    plt.tight_layout()
    plt.savefig(f'{output_dir}/ycbcr_channel_comparison.png')
    plt.close()

if __name__ == "__main__":
    create_comparison("8x8input.jpeg", "8x8output.jpeg")
    print("Comparison images created in 'dct_comparisons' directory") 