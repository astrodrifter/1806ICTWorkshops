/* Given an integer number X and a value n, write a program 
 * that prints an output that is made up of the first n 
 * digits of the number X, followed by the first n-1 digits 
 * of the number X, and so on. Your program must check that 
 * the value n is smaller than the number of digits in the number X.
*/

#include <stdio.h>
#include <math.h>

// prototypes
int getNumDigits(int);

// main
int main(int argc, char **argv)
{
	// input
	int x, n, count = 0;
	printf("Enter x and n values:\n");
	scanf("%i %i", &x, &n);
	
	// count how many didgits
	count = getNumDigits(x)-1;
	printf("You entered %i digits.\n", count+1);
	
	// sperate digits into an array
	//convert digits to words from left to right.6
	int myArray[count];
    while ( count >= 0) {
		int i = 0;
		myArray[i] = x/(pow(10.0,count));
		x = x - myArray[i] * pow(10.0,count);
		printf("%i\n",myArray[i]);
		count--;
		i++;
	}
	int j;
	for (j = 0; j < 6; j++){
		printf("myArray[0] = %i \n",myArray[j]);
	}
	// now we have digits in sperated in myArray
	// do sequence acording to value n
	//for(int j = 0; j <= n; j++){
	//	printf("%i \n",myArray[j]);
		//if(j == n){
		//	j = 0;
		//	n--;
		//}
		
	//}
	
	return 0;
}


int getNumDigits(int x) {
	int count = 0;
	while(x != 0) {
        // n = n/10
        x /= 10;
        ++count;
		//printf("%i\n",x);
    }
	return count;
}
