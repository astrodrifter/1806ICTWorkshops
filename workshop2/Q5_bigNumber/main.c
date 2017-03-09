#include <stdio.h>

int main() { 
    int bigNumber = 2000000000 + 2000000000;
    printf("%d %u\n", bigNumber, bigNumber);
    return 0; 
    // because signed number is outside range it 
    // will not print. But unsigned will.
}