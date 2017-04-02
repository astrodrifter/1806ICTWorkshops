/*An integer is said to be a prime number if it is divisible by 1 and itself. For example, 2, 3, 5,
and 7 are prime numbers, but 4, 6, 8, and 9 are not. Write a function that determines if a
number is prime.*/

#include <stdio.h>

//prototypes
int getNum(int);
int isPrime(int);


int main(int argc, char **argv)
{
	//variables
	int num, n = 0;
	
	// get user input
	num = getNum(n);
	
	// check if a prime number
	if(isPrime(num) == 1){
		printf("\nYour number is %i and is a prime number.",num);
	} else {
		printf("\nYour number is %i and is not a prime number.",num);
	}
	
	return 0;
}

//getNum() gets an integer input form user
int getNum(int n)
{
	int input;
	printf("Enter an integer:\t");
	scanf("%i",&input);
	n = input;
	return n;
}

// isPrime() checks if number is prime
int isPrime(int n)
{
	int divisors = 0;
	//loop i
	for (int i = 1; i <= n; i++)
		{
			if(n%i == 0) 
			{
				divisors++;
			}
		}
		
		if (divisors == 2)
		{
			return 1;
			
		} else {
			
			return 0;
		}
}