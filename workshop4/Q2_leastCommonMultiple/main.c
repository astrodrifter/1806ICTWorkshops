/*The least common multiple (lcm) of two positive integers u and v is the smallest positive
integer that is evenly divisible by both u and v. Thus, the lcm of 15 and 10, written as lcm(15,
10), is 30 because 30 is the smallest integer divisible by both 15 and 10. Write a function lcm()
that takes two integer arguments, and returns their lcm. */

/* Algorythm 
 * The least common multiple of a and b is the product divided by the greatest common divisor. 
 * I.e. lcm(a, b) = ab/gcd(a, b). */

#include <stdio.h>

int getLcm(int,int,int);
int getProduct(int,int);

int main(int argc, char **argv)
{
	int num1, num2, product, lcm;
	
	//get inputs
	printf("Enter your two numbers:\n");
	scanf("%i %i", &num1, &num2);
	
	// get product of num1 and num2
	product = getProduct(num1,num2);
	
	// get least common multiple
	lcm = getLcm(num1,num2,product);
	
}

// getProduct takes num1 and num2 and returns their product (prod)
int getProduct(int num1, int num2) 
{
	int prod;
	prod = num1*num2;
	return prod;
}

//lcm takes num1, num2 and product. First gcd is found and then lcm.
int getLcm(int num1,int num2, int product)
{
	int max, lcm, gcd;
	
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
	
	// devide prodcut by gcd to find lcm
	lcm = product/gcd;
	printf("Least common multiple = %i\n",lcm);
	
	return lcm;
}