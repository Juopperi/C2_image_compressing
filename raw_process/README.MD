There are two Python scripts for extracting photon counting information from a NEF file, 
a type of RAW file used by Nikon.
**Actually, there is no single universal "RAW" file format; instead, different camera manufacturers use their 
own specific types of RAW files.**

The script `convert_NEF2bin.py` can read a NEF file and convert it into a binary format. 
Initially, I chose to use a grayscale image format because handling a photon counting information file is more complex. 
Different sensors have specific arrangements for storing different types of photons (RGB), which requires additional processing.

The script `convert_bin2jpg.py` is a verification tool that converts the binary file into a JPG image, 
allowing us to visually confirm that the binary information is meaningful.
Since the binary file is decoded using a linear method rather than a logarithmic approach, the final image may appear less clear.