/*  Write a program that reads in the size of an array and the array elements (all of which
    are integers). The program then computes the sum of all the elements in the given
     array. Note: If the input is 3 1 4 8, then the array has 3 elements {1, 4, 8}.
	  
	   Dhruva O'Shea 30/03/2017
	  
	   1. get user to enter numbers. 
	   2. first entry will be size of array
	   3. the rest will fill the array
	   4. sum each element
	   5. output sum
*/
#include <stdio.h>

int main(int argc, char **argv)
{
	//variables
	int size, sum = 0;
	
	// get input
	printf("Enter the size of your array and then the elements.\n");
	scanf("%i",&size);
	int myArray[size];
	for(int i = 0; i < size; i++) {
		scanf("%i",&myArray[i]);
	}
	
	//get sum
	for(int i = 0; i < size; i++) {
		sum += myArray[i];
	}
	
	//output result
	printf("\nSum = %i.\n",sum);
	
	return 0;
} // end program
