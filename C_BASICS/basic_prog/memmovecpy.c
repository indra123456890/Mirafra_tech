#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello World!";
    char str2[] = "Goodbye";
    size_t n = 6;

    // Example of memmove()
    printf("Before memmove() str1 = %s, str2 = %s\n", str1, str2);
    memmove(str1+6, str1, n);
    printf("After memmove() str1 = %s, str2 = %s\n", str1, str2);

    // Example of memcpy()
    printf("Before memcpy() str1 = %s, str2 = %s\n", str1, str2);
    memcpy(str1, str2, n);
    printf("After memcpy() str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}

