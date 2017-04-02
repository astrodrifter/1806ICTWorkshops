/* Write a program to find the greatest common divisor (gcd) of two positive integers. 
 * The greatest common divisor of two integers is the largest integer value that 
 * evenly divides the twointegers. Define a function that takes in the two integers 
 * and returns the gcd to the main program.*/

#include <stdio.h>

void getGcd(void);

int main(int argc, char **argv)
{
	getGcd();
	return 0;
}

//gcd takes two inputs from user and finds the gcd
void getGcd(void)
{
	//variables
	int num1, num2, gcd, max;
	
	//get input
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
}