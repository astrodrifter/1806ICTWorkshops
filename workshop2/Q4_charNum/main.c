#include <stdio.h>


/*int main() { 
    char c = 'a';
    printf("%c\n", c); 
    printf("%d\n", c);
    return 0; 
}*/


int main() { 
    char c = 'A';
    printf("sizeof(c) = %u\n", sizeof(c)); 
    printf("sizeof('A') = %u\n", sizeof('A')); 
    printf("sizeof(c + c) = %u\n", sizeof(c + c));
    return 0; 
}