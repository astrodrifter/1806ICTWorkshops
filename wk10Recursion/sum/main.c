/* Write a recursive function that computes the sum of the first n 
 * positive integers.Your program will read in the integer value 
 * for n, and call the recursive function to compute the 
 * sum of 1+2+3+...+ n. 
 * 
 * Dhruva O'Shea 24/05/17
 * 
*/
 
#include <stdio.h>

int sum(int n)
   {
     if (n <= 1)
           return n;
     else
           return (n + sum(n-1));
}

int main(int argc, char **argv)
{
	int sum1, n;
	printf("\nEnter n\n");
	scanf("%i",&n);
	sum1 = sum(n);
	printf("sum%i = %i\n",n,sum1);
	return 0;
}
