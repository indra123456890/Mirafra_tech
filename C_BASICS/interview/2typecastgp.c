#include <stdio.h>

int main() {
    // Four bytes representing the characters
    char byte1 = 'A';
    char byte2 = 'B';
    char byte3 = 'C';
    char byte4 = 'D';

    // Integer variable to hold the combined value
    int combinedValue;

    // Typecasting the characters to an integer pointer
    char* charPtr = (char*)&combinedValue;

    // Assigning each character to the respective byte in the integer variable
    *charPtr = byte1;
    *(charPtr + 1) = byte2;
    *(charPtr + 2) = byte3;
    *(charPtr + 3) = byte4;

    // Printing the result
    printf("Combined integer value: %d\n", combinedValue);
    
    return 0;
}

