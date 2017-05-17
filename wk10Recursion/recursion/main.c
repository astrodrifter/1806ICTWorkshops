#include <stdio.h>

/*calculates and returns factorial of n */
int factorial(int n)
{
    if( n <= 1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

/* calculates and returns fobonacci of n */
int fibonacci(int n)
{
    if(n <= 1)
        return n;
    else 
        return fibonacci(n - 2) + fibonacci(n - 1);
}
/* Main program for testing factorial() function */
int main(void) {
    int n;
    printf("Please enter n: "); scanf("%d", &n);
    printf("%d! is %d\n", n, factorial(n));
    printf("fibonacci of %d is %d\n", n, fibonacci(n));
    return 0;
}
