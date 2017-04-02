/*Write a program that reads in the size of an array and the array elements (all of which
are integers). The program then prints out the minimum and maximum values in the
given array.
 * 
 * Dhruva O'Shea 30/03/2017
 * 
 * get array
 * loop through to find max
 * loop through to find min
 * 
 */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	//variables
	int size, max, min;
	
	// get input
	printf("Enter the size of your array and then the elements.\n");
	scanf("%i",&size);
	int myArray[size];
	for(int i = 0; i < size; i++) {
		scanf("%i",&myArray[i]);
	}
	
	//find max
	max = myArray[0];
	for(int i = 0; i < size; i++) {
		if(myArray[i] > max){
			max = myArray[i];
		}
	}
	
	//find min
	min = myArray[0];
	for(int i = 0; i < size; i++) {
		if(myArray[i] < min){
			min = myArray[i];
		}
	}
	
	//output result
	printf("\nMax = %i, Min = %i.\n",max,min);
	
	return 0;
} // end program

