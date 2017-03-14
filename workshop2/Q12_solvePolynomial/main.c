/*A polynomial come sin the form ax^2 + bx + c = 0
 * The project will take inputs for a, b and c
 * and solve the plynomial */
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    //get values
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
    printf("\nEnter value for a:\n");
    scanf("%f",&a);
    printf("\nEnter value for b:\n");
    scanf("%f",&b);
    printf("\nEnter value for c:\n");
    scanf("%f",&b);
 
	//calculate
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
    printf("Solution: x1 = %.2f, x2 = %.2f.\n\n", x1, x2);
	return 0;
}
