#ifndef PL_JPEG_ENCODER_H
#define PL_JPEG_ENCODER_H

#include <string>
#include <vector>
#include <fstream>
#include <cstdint>

class PLJpegEncoder {
public:
    PLJpegEncoder();
    ~PLJpegEncoder();

    // Initialize encoder with image dimensions and quality
    bool initialize(int width, int height, int comp, int quality);
    
    // Process a data unit received from PL (zigzag-ed and quantized data)
    // channel: 0 = Y, 1 = U, 2 = V
    bool processDataUnit(int* zigzagData, int channel, int x, int y);
    
    // Write the JPEG header
    bool writeHeader(const std::string& filename);
    
    // Finalize and close the JPEG file
    bool finalize();

private:
    // Huffman tables (copied from stb_image_write)
    static const unsigned short YDC_HT[256][2];
    static const unsigned short UVDC_HT[256][2];
    static const unsigned short YAC_HT[256][2];
    static const unsigned short UVAC_HT[256][2];
    
    // Standard header data
    static const unsigned char std_dc_luminance_nrcodes[17];
    static const unsigned char std_dc_luminance_values[12];
    static const unsigned char std_ac_luminance_nrcodes[17];
    static const unsigned char std_ac_luminance_values[162];
    static const unsigned char std_dc_chrominance_nrcodes[17];
    static const unsigned char std_dc_chrominance_values[12];
    static const unsigned char std_ac_chrominance_nrcodes[17];
    static const unsigned char std_ac_chrominance_values[162];
    
    // Zigzag mapping (if needed)
    static const unsigned char zigzagMap[64];
    
    // Utility methods for Huffman encoding
    void writeBits(const unsigned short* bs);
    void calcBits(int val, unsigned short bits[2]);
    int processDUFromZigzag(int* zigzagData, int channel);
    
    // Write methods
    void putByte(unsigned char byte);
    void writeMarker(unsigned char marker1, unsigned char marker2);
    void writeAPP0();
    void writeDQT();
    void writeSOF0();
    void writeDHT();
    void writeSOS();
    void writeEOI();
    
    // Image properties
    int width_;
    int height_;
    int comp_;
    int quality_;
    bool subsample_;
    int DCY_, DCU_, DCV_;  // DC components
    
    // Bit buffer for encoding
    int bitBuf_;
    int bitCnt_;
    
    // Output file
    std::ofstream outFile_;
    bool fileOpened_;
};

#endif // PL_JPEG_ENCODER_H 