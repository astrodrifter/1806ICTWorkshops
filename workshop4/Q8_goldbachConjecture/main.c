/*The Goldbach conjecture says that every even integer n that is greater than 2 has the property
that it is the sum of two prime numbers. Using your solution from Q3, write a program that
will prove that the conjecture is true for all even integers between two numbers that you will
input into the program. 
 
    Dhruva O'Shea 29/03/2017 

 */



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
