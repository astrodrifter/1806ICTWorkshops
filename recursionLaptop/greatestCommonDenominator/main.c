#include <stdio.h>
// gcd recursively finds greatest common divisor of x and y 
int gcd(int x, int y)
{
     // base case
     if (y == 0)
     {
        return x; 
    }
     // recursive step
     else
     {
         return gcd(y, x%y);
     }
}

int main() {
    int x; // first integer
    int y; // second integer
    int gcDiv; // greatest common divisor of x and y
    printf("%s", "Enter two integers: ");
    scanf("%u%u", &x, &y);
    gcDiv = gcd(x, y);
    printf("Greatest common divisor of %u and %u is %u\n", x, y, gcDiv);
}