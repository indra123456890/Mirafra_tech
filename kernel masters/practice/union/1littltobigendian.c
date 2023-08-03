#include <stdio.h>

union EndianConverter {
    unsigned int value;
    unsigned char bytes[sizeof(unsigned int)];
};

unsigned int littleEndianToBigEndian(unsigned int littleEndian) {
    union EndianConverter converter;
    converter.value = littleEndian;
    
    unsigned int bigEndian = (converter.bytes[0] << 24) |
                             (converter.bytes[1] << 16) |
                             (converter.bytes[2] << 8) |
                             (converter.bytes[3]);
    
    return bigEndian;
}

int main() {
    unsigned int littleEndian;
    unsigned int bigEndian;
    
    printf("Enter a little-endian integer: ");
    scanf("%u", &littleEndian);
    
    bigEndian = littleEndianToBigEndian(littleEndian);
    
    printf("Big-endian conversion: %u\n", bigEndian);
    
    return 0;
}

