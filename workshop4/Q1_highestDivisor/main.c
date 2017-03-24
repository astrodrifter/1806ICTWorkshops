/* Write a program to find the greatest common divisor (gcd) of two positive integers. 
 * The greatest common divisor of two integers is the largest integer value that 
 * evenly divides the twointegers. Define a function that takes in the two integers 
 * and returns the gcd to the main program.*/

#include <stdio.h>


//find gcd of both
//find gcd in both

int main(int argc, char **argv)
{
	//enter two numbers
	int num1 = 0, num2 = 0, gcd = 0, max = 0;
	printf("Enter your two numbers:\n");
	scanf("%i %i", &num1, &num2);
	
	//which num is higher
	max = num1;
	if(num2 > num1){
		max = num2;
	}
	
	//find gcd of both
	for(int i = 1; i < max; i++) {
		if (num1%i == 0 && num2%i == 0) {
			gcd = i;
		}
		
	}
	printf("gcd = %i\n",gcd);
	return 0;
}
