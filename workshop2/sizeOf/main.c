/* * This program computes the 
 * size of some fundamental types. */ 
 
#include <stdio.h>

int main() { 
    printf("char : %u byte \n", sizeof(char)); 
    printf("short int : %u bytes\n", sizeof(short int)); 
    printf("int : %u bytes\n", sizeof(int)); 
    printf("long int : %u bytes\n", sizeof(long int)); 
    printf("unsigned int: %u bytes\n", sizeof(unsigned int)); 
    printf("float : %u bytes\n", sizeof(float)); 
    printf("double : %u bytes\n", sizeof(double)); 
    printf("long double : %u bytes\n", sizeof(long double));
    return 0; 
}
