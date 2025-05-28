import pandas as pd
import matplotlib.pyplot as plt

def plot_dct_errors(csv_file):
    """Plot DCT error analysis from CSV file with logarithmic y-axis"""
    # Read the CSV data
    df = pd.read_csv(csv_file)
    
    # Create figure
    plt.figure(figsize=(10, 6))
    
    # Plot with logarithmic y-axis
    plt.semilogy(df['CONST_W'], df['AvgError'], 'b-o', label='Average Error')
    plt.semilogy(df['CONST_W'], df['MaxError'], 'r-o', label='Maximum Error')
    
    # Annotate maximum and minimum values for Average Error
    avg_min_idx = df['AvgError'].idxmin()
    avg_max_idx = df['AvgError'].idxmax()
    avg_min_x = df.loc[avg_min_idx, 'CONST_W']
    avg_max_x = df.loc[avg_max_idx, 'CONST_W']
    avg_min_y = df.loc[avg_min_idx, 'AvgError']
    avg_max_y = df.loc[avg_max_idx, 'AvgError']
    
    plt.annotate(f'{avg_min_y:.4f}', xy=(avg_min_x, avg_min_y), xytext=(5, 10), 
                 textcoords='offset points', color='blue', fontweight='bold')
    plt.annotate(f'{avg_max_y:.4f}', xy=(avg_max_x, avg_max_y), xytext=(5, 10), 
                 textcoords='offset points', color='blue', fontweight='bold')
    
    # Annotate maximum and minimum values for Maximum Error
    max_min_idx = df['MaxError'].idxmin()
    max_max_idx = df['MaxError'].idxmax()
    max_min_x = df.loc[max_min_idx, 'CONST_W']
    max_max_x = df.loc[max_max_idx, 'CONST_W']
    max_min_y = df.loc[max_min_idx, 'MaxError']
    max_max_y = df.loc[max_max_idx, 'MaxError']
    
    plt.annotate(f'{max_min_y:.4f}', xy=(max_min_x, max_min_y), xytext=(5, 10), 
                 textcoords='offset points', color='red', fontweight='bold')
    plt.annotate(f'{max_max_y:.4f}', xy=(max_max_x, max_max_y), xytext=(5, 10), 
                 textcoords='offset points', color='red', fontweight='bold')
    
    # Add labels and title
    plt.xlabel('CONST_W')
    plt.ylabel('Error (log scale)')
    plt.title('DCT Error Analysis')
    plt.grid(True, which="both", ls="-")
    plt.legend()
    
    # Adjust layout
    plt.tight_layout()
    
    # Save figure
    plt.savefig('dct_error_analysis.png', dpi=300, bbox_inches='tight')
    
    # Print statistics
    print("\nStatistics:")
    print(f"Minimum Average Error: {df['AvgError'].min():.6f} (CONST_W = {df.loc[df['AvgError'].idxmin(), 'CONST_W']})")
    print(f"Maximum Average Error: {df['AvgError'].max():.6f} (CONST_W = {df.loc[df['AvgError'].idxmax(), 'CONST_W']})")
    print(f"Minimum Maximum Error: {df['MaxError'].min():.6f} (CONST_W = {df.loc[df['MaxError'].idxmin(), 'CONST_W']})")
    print(f"Maximum Maximum Error: {df['MaxError'].max():.6f} (CONST_W = {df.loc[df['MaxError'].idxmax(), 'CONST_W']})")
    print(f"Minimum Mismatches: {df['Mismatches'].min()} (CONST_W = {df.loc[df['Mismatches'].idxmin(), 'CONST_W']})")
    print(f"Maximum Mismatches: {df['Mismatches'].max()} (CONST_W = {df.loc[df['Mismatches'].idxmax(), 'CONST_W']})")

def main():
    # File path to the CSV data
    csv_file = 'dct_sweep_results.csv'
    
    # Plot results
    plot_dct_errors(csv_file)

if __name__ == '__main__':
    main()