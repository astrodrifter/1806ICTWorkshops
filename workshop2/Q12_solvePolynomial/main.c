/*A polynomial come sin the form ax^2 + bx + c = 0
 * The project will take inputs for a, b and c
 * and solve the plynomial */
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    float a, b, c, x1, x2;
    printf("\nEnter values for a, b and c:\n");
	scanf("%f %f %f", &a, &b, &c);
    x1 = -b+sqrt(b*b-(2*a*c))/(2*a);
    x2 = -b-sqrt(pow(b,2)-2*a*c)/(2*a);
    printf("Solution: x1 = %f, x2 = %f.\n\n", x1, x2);
	//return 0;
}
