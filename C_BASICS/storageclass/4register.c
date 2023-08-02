/*The register storage class is used to define local variables that should be stored in a register instead of RAM. This means that the variable has a maximum size equal to the register size (usually one word) and can't have the unary '&' operator applied to it (as it does not have a memory location).

In C, the register storage class is used to suggest that a particular variable should be stored in a CPU register rather than in memory. The register keyword is just a suggestion to the compiler and is not a strict command. The compiler may or may not choose to honor this suggestion based on various factors such as the number of available registers, register allocation strategy, etc.*/

#include <stdio.h>

void incrementUsingRegister() {
    // Declare a variable with the 'register' storage class.
    register int i;

    for (i = 1; i <= 5; i++) {
        printf("Value: %d\n", i);
    }
}

int main() {
    incrementUsingRegister();
    return 0;
}

