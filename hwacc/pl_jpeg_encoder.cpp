#include "pl_jpeg_encoder.h"
#include <cmath>
#include <cstring>

// Define the static constants from the header
const unsigned short PLJpegEncoder::YDC_HT[256][2] = { {0,2},{2,3},{3,3},{4,3},{5,3},{6,3},{14,4},{30,5},{62,6},{126,7},{254,8},{510,9}};
const unsigned short PLJpegEncoder::UVDC_HT[256][2] = { {0,2},{1,2},{2,2},{6,3},{14,4},{30,5},{62,6},{126,7},{254,8},{510,9},{1022,10},{2046,11}};
const unsigned short PLJpegEncoder::YAC_HT[256][2] = {
    {10,4},{0,2},{1,2},{4,3},{11,4},{26,5},{120,7},{248,8},{1014,10},{65410,16},{65411,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {12,4},{27,5},{121,7},{502,9},{2038,11},{65412,16},{65413,16},{65414,16},{65415,16},{65416,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {28,5},{249,8},{1015,10},{4084,12},{65417,16},{65418,16},{65419,16},{65420,16},{65421,16},{65422,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {58,6},{503,9},{4085,12},{65423,16},{65424,16},{65425,16},{65426,16},{65427,16},{65428,16},{65429,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {59,6},{1016,10},{65430,16},{65431,16},{65432,16},{65433,16},{65434,16},{65435,16},{65436,16},{65437,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {122,7},{2039,11},{65438,16},{65439,16},{65440,16},{65441,16},{65442,16},{65443,16},{65444,16},{65445,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {123,7},{4086,12},{65446,16},{65447,16},{65448,16},{65449,16},{65450,16},{65451,16},{65452,16},{65453,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {250,8},{4087,12},{65454,16},{65455,16},{65456,16},{65457,16},{65458,16},{65459,16},{65460,16},{65461,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {504,9},{32704,15},{65462,16},{65463,16},{65464,16},{65465,16},{65466,16},{65467,16},{65468,16},{65469,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {505,9},{65470,16},{65471,16},{65472,16},{65473,16},{65474,16},{65475,16},{65476,16},{65477,16},{65478,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {506,9},{65479,16},{65480,16},{65481,16},{65482,16},{65483,16},{65484,16},{65485,16},{65486,16},{65487,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {1017,10},{65488,16},{65489,16},{65490,16},{65491,16},{65492,16},{65493,16},{65494,16},{65495,16},{65496,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {1018,10},{65497,16},{65498,16},{65499,16},{65500,16},{65501,16},{65502,16},{65503,16},{65504,16},{65505,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {2040,11},{65506,16},{65507,16},{65508,16},{65509,16},{65510,16},{65511,16},{65512,16},{65513,16},{65514,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {65515,16},{65516,16},{65517,16},{65518,16},{65519,16},{65520,16},{65521,16},{65522,16},{65523,16},{65524,16},{0,0},{0,0},{0,0},{0,0},{0,0},
    {2041,11},{65525,16},{65526,16},{65527,16},{65528,16},{65529,16},{65530,16},{65531,16},{65532,16},{65533,16},{65534,16},{0,0},{0,0},{0,0},{0,0},{0,0}
};
const unsigned short PLJpegEncoder::UVAC_HT[256][2] = {
    {0,2},{1,2},{4,3},{10,4},{24,5},{25,5},{56,6},{120,7},{500,9},{1014,10},{4084,12},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {11,4},{57,6},{246,8},{501,9},{2038,11},{4085,12},{65416,16},{65417,16},{65418,16},{65419,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {26,5},{247,8},{1015,10},{4086,12},{32706,15},{65420,16},{65421,16},{65422,16},{65423,16},{65424,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {27,5},{248,8},{1016,10},{4087,12},{65425,16},{65426,16},{65427,16},{65428,16},{65429,16},{65430,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {58,6},{502,9},{65431,16},{65432,16},{65433,16},{65434,16},{65435,16},{65436,16},{65437,16},{65438,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {59,6},{1017,10},{65439,16},{65440,16},{65441,16},{65442,16},{65443,16},{65444,16},{65445,16},{65446,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {121,7},{2039,11},{65447,16},{65448,16},{65449,16},{65450,16},{65451,16},{65452,16},{65453,16},{65454,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {122,7},{2040,11},{65455,16},{65456,16},{65457,16},{65458,16},{65459,16},{65460,16},{65461,16},{65462,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {249,8},{65463,16},{65464,16},{65465,16},{65466,16},{65467,16},{65468,16},{65469,16},{65470,16},{65471,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {503,9},{65472,16},{65473,16},{65474,16},{65475,16},{65476,16},{65477,16},{65478,16},{65479,16},{65480,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {504,9},{65481,16},{65482,16},{65483,16},{65484,16},{65485,16},{65486,16},{65487,16},{65488,16},{65489,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {505,9},{65490,16},{65491,16},{65492,16},{65493,16},{65494,16},{65495,16},{65496,16},{65497,16},{65498,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {506,9},{65499,16},{65500,16},{65501,16},{65502,16},{65503,16},{65504,16},{65505,16},{65506,16},{65507,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {2041,11},{65508,16},{65509,16},{65510,16},{65511,16},{65512,16},{65513,16},{65514,16},{65515,16},{65516,16},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},
    {16352,14},{65517,16},{65518,16},{65519,16},{65520,16},{65521,16},{65522,16},{65523,16},{65524,16},{65525,16},{0,0},{0,0},{0,0},{0,0},{0,0},
    {1018,10},{32707,15},{65526,16},{65527,16},{65528,16},{65529,16},{65530,16},{65531,16},{65532,16},{65533,16},{65534,16},{0,0},{0,0},{0,0},{0,0},{0,0}
};

// These values are from the original code
const unsigned char PLJpegEncoder::std_dc_luminance_nrcodes[] = {0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0};
const unsigned char PLJpegEncoder::std_dc_luminance_values[] = {0,1,2,3,4,5,6,7,8,9,10,11};
const unsigned char PLJpegEncoder::std_ac_luminance_nrcodes[] = {0,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,0x7d};
const unsigned char PLJpegEncoder::std_ac_luminance_values[] = {
    0x01,0x02,0x03,0x00,0x04,0x11,0x05,0x12,0x21,0x31,0x41,0x06,0x13,0x51,0x61,0x07,0x22,0x71,0x14,0x32,0x81,0x91,0xa1,0x08,
    0x23,0x42,0xb1,0xc1,0x15,0x52,0xd1,0xf0,0x24,0x33,0x62,0x72,0x82,0x09,0x0a,0x16,0x17,0x18,0x19,0x1a,0x25,0x26,0x27,0x28,
    0x29,0x2a,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x53,0x54,0x55,0x56,0x57,0x58,0x59,
    0x5a,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6a,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7a,0x83,0x84,0x85,0x86,0x87,0x88,0x89,
    0x8a,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9a,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xb2,0xb3,0xb4,0xb5,0xb6,
    0xb7,0xb8,0xb9,0xba,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xd2,0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,0xe1,0xe2,
    0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,0xea,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa
};
const unsigned char PLJpegEncoder::std_dc_chrominance_nrcodes[] = {0,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0};
const unsigned char PLJpegEncoder::std_dc_chrominance_values[] = {0,1,2,3,4,5,6,7,8,9,10,11};
const unsigned char PLJpegEncoder::std_ac_chrominance_nrcodes[] = {0,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,0x77};
const unsigned char PLJpegEncoder::std_ac_chrominance_values[] = {
    0x00,0x01,0x02,0x03,0x11,0x04,0x05,0x21,0x31,0x06,0x12,0x41,0x51,0x07,0x61,0x71,0x13,0x22,0x32,0x81,0x08,0x14,0x42,0x91,
    0xa1,0xb1,0xc1,0x09,0x23,0x33,0x52,0xf0,0x15,0x62,0x72,0xd1,0x0a,0x16,0x24,0x34,0xe1,0x25,0xf1,0x17,0x18,0x19,0x1a,0x26,
    0x27,0x28,0x29,0x2a,0x35,0x36,0x37,0x38,0x39,0x3a,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x53,0x54,0x55,0x56,0x57,0x58,
    0x59,0x5a,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6a,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7a,0x82,0x83,0x84,0x85,0x86,0x87,
    0x88,0x89,0x8a,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9a,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xb2,0xb3,0xb4,
    0xb5,0xb6,0xb7,0xb8,0xb9,0xba,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xd2,0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,
    0xe2,0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,0xea,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa
};

const unsigned char PLJpegEncoder::zigzagMap[64] = { 
    0,1,5,6,14,15,27,28,2,4,7,13,16,26,29,42,3,8,12,17,25,30,41,43,9,11,18,
    24,31,40,44,53,10,19,23,32,39,45,52,54,20,22,33,38,46,51,55,60,21,34,37,47,50,56,59,61,35,36,48,49,57,58,62,63 
};

// Constructor
PLJpegEncoder::PLJpegEncoder()
    : width_(0), height_(0), comp_(0), quality_(0), subsample_(false), 
      DCY_(0), DCU_(0), DCV_(0), bitBuf_(0), bitCnt_(0), 
      fileOpened_(false) {
}

// Destructor
PLJpegEncoder::~PLJpegEncoder() {
    if (fileOpened_) {
        outFile_.close();
    }
}

// Initialize the encoder with image properties
bool PLJpegEncoder::initialize(int width, int height, int comp, int quality) {
    if (width <= 0 || height <= 0 || comp < 1 || comp > 4) {
        return false;
    }
    
    width_ = width;
    height_ = height;
    comp_ = comp;
    quality_ = quality ? quality : 90;
    subsample_ = quality_ <= 90 ? true : false;
    
    // Reset DC components
    DCY_ = DCU_ = DCV_ = 0;
    
    // Reset bit buffer
    bitBuf_ = bitCnt_ = 0;
    
    return true;
}

// Write header to a file
bool PLJpegEncoder::writeHeader(const std::string& filename) {
    outFile_.open(filename, std::ios::binary);
    if (!outFile_.is_open()) {
        return false;
    }
    
    fileOpened_ = true;
    
    // Write SOI
    writeMarker(0xFF, 0xD8);
    
    // Write APP0 (JFIF header)
    writeAPP0();
    
    // Write DQT (Quantization Tables)
    writeDQT();
    
    // Write SOF0 (Start of Frame)
    writeSOF0();
    
    // Write DHT (Huffman Tables)
    writeDHT();
    
    // Write SOS (Start of Scan)
    writeSOS();
    
    return true;
}

// Process a data unit received from PL
bool PLJpegEncoder::processDataUnit(int* zigzagData, int channel, int x, int y) {
    if (!fileOpened_) {
        return false;
    }
    
    // Process the data unit based on channel
    switch (channel) {
        case 0: // Y channel
            DCY_ = processDUFromZigzag(zigzagData, 0);
            break;
        case 1: // U channel
            DCU_ = processDUFromZigzag(zigzagData, 1);
            break;
        case 2: // V channel
            DCV_ = processDUFromZigzag(zigzagData, 2);
            break;
        default:
            return false;
    }
    
    return true;
}

// Finalize and close the file
bool PLJpegEncoder::finalize() {
    if (!fileOpened_) {
        return false;
    }
    
    // Write EOI (End of Image)
    writeEOI();
    
    // Flush bit buffer
    static const unsigned short fillBits[] = {0x7F, 7};
    writeBits(fillBits);
    
    // Close file
    outFile_.close();
    fileOpened_ = false;
    
    return true;
}

// Process a data unit from zigzag-ed data
int PLJpegEncoder::processDUFromZigzag(int* zigzagData, int channel) {
    // EOB marker
    const unsigned short EOB[2] = { channel ? UVAC_HT[0x00][0] : YAC_HT[0x00][0], 
                                   channel ? UVAC_HT[0x00][1] : YAC_HT[0x00][1] };
    // 16 zeroes marker
    const unsigned short M16zeroes[2] = { channel ? UVAC_HT[0xF0][0] : YAC_HT[0xF0][0], 
                                         channel ? UVAC_HT[0xF0][1] : YAC_HT[0xF0][1] };
    
    // Get the previous DC value
    int prevDC = 0;
    switch (channel) {
        case 0: prevDC = DCY_; break;
        case 1: prevDC = DCU_; break;
        case 2: prevDC = DCV_; break;
    }
    
    // Encode DC coefficient
    int diff = zigzagData[0] - prevDC;
    if (diff == 0) {
        // Write code for 0 difference
        writeBits(channel ? UVDC_HT[0] : YDC_HT[0]);
    } else {
        // Calculate and write the Huffman code
        unsigned short bits[2];
        calcBits(diff, bits);
        writeBits(channel ? UVDC_HT[bits[1]] : YDC_HT[bits[1]]);
        writeBits(bits);
    }
    
    // Find last non-zero coefficient
    int end0pos = 63;
    while (end0pos > 0 && zigzagData[end0pos] == 0) {
        end0pos--;
    }
    
    // If all AC coefficients are zero, write EOB
    if (end0pos == 0) {
        writeBits(EOB);
        return zigzagData[0];
    }
    
    // Encode AC coefficients
    for (int i = 1; i <= end0pos; i++) {
        int startpos = i;
        // Skip zeros
        while (i <= end0pos && zigzagData[i] == 0) {
            i++;
        }
        
        int nrzeroes = i - startpos;
        // Handle 16+ zeros
        if (nrzeroes >= 16) {
            int lng = nrzeroes >> 4;
            for (int nrmarker = 1; nrmarker <= lng; nrmarker++) {
                writeBits(M16zeroes);
            }
            nrzeroes &= 15;
        }
        
        // Encode the coefficient
        unsigned short bits[2];
        calcBits(zigzagData[i], bits);
        writeBits(channel ? UVAC_HT[(nrzeroes << 4) + bits[1]] : YAC_HT[(nrzeroes << 4) + bits[1]]);
        writeBits(bits);
    }
    
    // Write EOB if needed
    if (end0pos != 63) {
        writeBits(EOB);
    }
    
    // Return the DC value for the next block
    return zigzagData[0];
}

// Calculate bit representation for a value
void PLJpegEncoder::calcBits(int val, unsigned short bits[2]) {
    int tmp1 = val < 0 ? -val : val;
    val = val < 0 ? val - 1 : val;
    bits[1] = 1;
    while (tmp1 >>= 1) {
        ++bits[1];
    }
    bits[0] = val & ((1 << bits[1]) - 1);
}

// Write bits to the output
void PLJpegEncoder::writeBits(const unsigned short* bs) {
    bitCnt_ += bs[1];
    bitBuf_ |= bs[0] << (24 - bitCnt_);
    
    while (bitCnt_ >= 8) {
        unsigned char c = (bitBuf_ >> 16) & 255;
        putByte(c);
        if (c == 0xFF) {
            putByte(0); // Insert 0 after 0xFF (byte stuffing)
        }
        bitBuf_ <<= 8;
        bitCnt_ -= 8;
    }
}

// Write a single byte to the output
void PLJpegEncoder::putByte(unsigned char byte) {
    outFile_.put(byte);
}

// Write a marker
void PLJpegEncoder::writeMarker(unsigned char marker1, unsigned char marker2) {
    putByte(marker1);
    putByte(marker2);
}

// Write APP0 segment
void PLJpegEncoder::writeAPP0() {
    writeMarker(0xFF, 0xE0);
    
    // Length
    putByte(0x00);
    putByte(0x10);
    
    // JFIF identifier
    putByte('J');
    putByte('F');
    putByte('I');
    putByte('F');
    putByte(0x00);
    
    // Version
    putByte(0x01);
    putByte(0x01);
    
    // Units and density
    putByte(0x00);     // No units
    putByte(0x00);     // Horizontal density (1)
    putByte(0x01);
    putByte(0x00);     // Vertical density (1)
    putByte(0x01);
    
    // Thumbnail size (0x0)
    putByte(0x00);
    putByte(0x00);
}

// Write Quantization Tables
void PLJpegEncoder::writeDQT() {
    // Calculate adjusted quality
    int quality = quality_ < 50 ? 5000 / quality_ : 200 - quality_ * 2;
    
    // Standard quantization tables
    static const int YQT[] = {
        16,11,10,16,24,40,51,61,12,12,14,19,26,58,60,55,14,13,16,24,40,57,69,56,14,17,22,29,51,87,80,62,18,22,
        37,56,68,109,103,77,24,35,55,64,81,104,113,92,49,64,78,87,103,121,120,101,72,92,95,98,112,100,103,99
    };
    static const int UVQT[] = {
        17,18,24,47,99,99,99,99,18,21,26,66,99,99,99,99,24,26,56,99,99,99,99,99,47,66,99,99,99,99,99,99,
        99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99
    };
    
    // Write luminance table
    writeMarker(0xFF, 0xDB);
    putByte(0x00);
    putByte(0x43);
    putByte(0x00);
    
    for (int i = 0; i < 64; i++) {
        int yti = (YQT[i] * quality + 50) / 100;
        yti = std::max(1, std::min(255, yti));
        putByte(yti);
    }
    
    // Write chrominance table
    writeMarker(0xFF, 0xDB);
    putByte(0x00);
    putByte(0x43);
    putByte(0x01);
    
    for (int i = 0; i < 64; i++) {
        int uvti = (UVQT[i] * quality + 50) / 100;
        uvti = std::max(1, std::min(255, uvti));
        putByte(uvti);
    }
}

// Write Start of Frame
void PLJpegEncoder::writeSOF0() {
    writeMarker(0xFF, 0xC0);
    
    // Length
    putByte(0x00);
    putByte(0x11);
    
    // Precision (8 bits)
    putByte(0x08);
    
    // Height and width
    putByte((height_ >> 8) & 0xFF);
    putByte(height_ & 0xFF);
    putByte((width_ >> 8) & 0xFF);
    putByte(width_ & 0xFF);
    
    // Number of components
    putByte(0x03);
    
    // Component info
    // Y
    putByte(0x01);
    putByte(subsample_ ? 0x22 : 0x11); // Sampling factors
    putByte(0x00);                     // Quantization table ID
    
    // Cb
    putByte(0x02);
    putByte(0x11);                     // Sampling factors
    putByte(0x01);                     // Quantization table ID
    
    // Cr
    putByte(0x03);
    putByte(0x11);                     // Sampling factors
    putByte(0x01);                     // Quantization table ID
}

// Write Huffman Tables
void PLJpegEncoder::writeDHT() {
    writeMarker(0xFF, 0xC4);
    
    // Length
    int length = 2;
    length += 1 + 16 + sizeof(std_dc_luminance_values);
    length += 1 + 16 + sizeof(std_ac_luminance_values);
    length += 1 + 16 + sizeof(std_dc_chrominance_values);
    length += 1 + 16 + sizeof(std_ac_chrominance_values);
    
    putByte((length >> 8) & 0xFF);
    putByte(length & 0xFF);
    
    // Write tables
    
    // DC Luminance
    putByte(0x00);  // Table ID and type
    outFile_.write((const char*)std_dc_luminance_nrcodes + 1, 16);
    outFile_.write((const char*)std_dc_luminance_values, sizeof(std_dc_luminance_values));
    
    // AC Luminance
    putByte(0x10);  // Table ID and type
    outFile_.write((const char*)std_ac_luminance_nrcodes + 1, 16);
    outFile_.write((const char*)std_ac_luminance_values, sizeof(std_ac_luminance_values));
    
    // DC Chrominance
    putByte(0x01);  // Table ID and type
    outFile_.write((const char*)std_dc_chrominance_nrcodes + 1, 16);
    outFile_.write((const char*)std_dc_chrominance_values, sizeof(std_dc_chrominance_values));
    
    // AC Chrominance
    putByte(0x11);  // Table ID and type
    outFile_.write((const char*)std_ac_chrominance_nrcodes + 1, 16);
    outFile_.write((const char*)std_ac_chrominance_values, sizeof(std_ac_chrominance_values));
}

// Write Start of Scan
void PLJpegEncoder::writeSOS() {
    writeMarker(0xFF, 0xDA);
    
    // Length
    putByte(0x00);
    putByte(0x0C);
    
    // Number of components
    putByte(0x03);
    
    // Component info
    // Y
    putByte(0x01);
    putByte(0x00);  // DC/AC table IDs
    
    // Cb
    putByte(0x02);
    putByte(0x11);  // DC/AC table IDs
    
    // Cr
    putByte(0x03);
    putByte(0x11);  // DC/AC table IDs
    
    // Spectral selection
    putByte(0x00);
    putByte(0x3F);
    putByte(0x00);
}

// Write End of Image
void PLJpegEncoder::writeEOI() {
    writeMarker(0xFF, 0xD9);
} 