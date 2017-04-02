/*The Goldbach conjecture says that every even integer n that is greater than 2 has the property
  that it is the sum of two prime numbers. Using your solution from Q3, write a program that
  will prove that the conjecture is true for all even integers between two numbers that you will
  input into the program. 
 
    Dhruva O'Shea 29/03/2017 

 */

/*get user to enter two even numbers
  for the even numbers prove the conjecture is true
	from lowest to highest loop adding 2
		for each even nume - 
*/
 
#include <stdio.h>
//prototypes
int getNum();
int findConjecture(int);
int isPrime(int);


int main(int argc, char **argv)
{
	//variables
	int low, high, i = 0;
	
	// get user numbers low end high
	while(i < 2) {
		if(i == 0) {
			low = getNum();
		} else if (i == 1) {
			high = getNum();
		}
		i++;
	}
	
	//prove conjecture
	for(int i = low; i <= high; i = i+2){
		findConjecture(i);
	}
	
	return 0;
}


//getNum() gets an integer input form user
int getNum()
{
	int input;
	printf("Enter an integer:\t");
	scanf("%i",&input);
	return input;
}

int findConjecture(int num) 
{
	int leftOver;
	for(int i = 2; i < num; i++){
		leftOver = num-i;
		if(leftOver == 2 | isPrime(leftOver)){
			printf("%i = %i + %i\n", num, i, leftOver);
			return 0;
		}
	}
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
