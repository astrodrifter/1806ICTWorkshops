/*An integer is said to be a perfect number if its factors, including 1 (but not the number itself),
sums to the number. For example, 6 is a perfect number because 6 = 1 + 2 + 3. Write a
function that prints out all perfect numbers between 1 and 1000.*/

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
		printf("\nYour number is %i and is a perfect number.",num);
	} else {
		printf("\nYour number is %i and is not a perfect number.",num);
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
	int sum = 0;
	//loop i
	for (int i = 1; i < n; i++)
		{
			if(n%i == 0) {
				sum += i;
				printf(" tally = %i\n", sum);
			}
		}
	printf("sum = %i\n", sum);
	if(sum == n){
		return 1;
	} else {
		return 0;
	}
}
