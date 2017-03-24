/*The least common multiple (lcm) of two positive integers u and v is the smallest positive
integer that is evenly divisible by both u and v. Thus, the lcm of 15 and 10, written as lcm(15,
10), is 30 because 30 is the smallest integer divisible by both 15 and 10. Write a function lcm()
that takes two integer arguments, and returns their lcm. */

/* Algorithym up vote
 * The least common multiple of a and b is the product divided by the greatest common divisor. 
 * I.e. lcm(a, b) = ab/gcd(a, b). */

#include <stdio.h>


int main(int argc, char **argv)
{
	int num1, num2, product, max, gcd, lcm;
	//get inputs
	printf("Enter your two numbers:\n");
	scanf("%i %i", &num1, &num2);
	
	// find product of num1 and num2
	product = num1*num2;
	
	// find greatest common devisor between num1 and num2
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
	
	// devide prodcut by gcd
	lcm = product/gcd;
	printf("Least common multiple = %i\n",lcm);
	return 0;
}
