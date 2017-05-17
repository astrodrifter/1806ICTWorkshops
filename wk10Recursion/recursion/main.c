#include <stdio.h>

/* Main program for testing factorial() function */
int factorial(int n)
{
    if( n <= 1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main(void) {
    int n;
    printf("Please enter n: "); scanf("%d", &n);
    printf("%d! is %d\n", n, factorial(n));
    return 0;
}
