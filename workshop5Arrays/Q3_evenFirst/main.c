/* Write a program that reads in the size of an array and the array elements (all of which
  are integers). The program then prints out an array that contains the exact same
  numbers as the original given array, but with the array elements rearranged such that
  all the even numbers come before all the odd numbers. Other than the latter
  requirement, the numbers can be in any order. Challenge: Instead of using a new
  array to store the rearranged numbers, try to rearrange the numbers in the original
  given array itself.
 
 * Dhruva O'Shea 30/03/2017
 
  * Steps
  1. get array
  2. rearange array
   * if myArray[i] is even and myArray[i-1] is not even move myArray[i] left.
 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//variables
	int size;
	
	// get input
	printf("Enter the size of your array and then the elements.\n");
	scanf("%i",&size);
	int myArray[size];
	for(int i = 0; i < size; i++) {
		scanf("%i",&myArray[i]);
	}
	
	//sort size amount of times
	for (int j = 0; j < size; j++) {
		int temp;
		for(int i = 1; i < size; i++) {
			if(myArray[i]%2 == 0 && myArray[i-1]%2 != 0) {
				temp = myArray[i - 1];
				myArray[i - 1] = myArray[i];
				myArray[i] = temp;
			} 
		}
	
	}
	
	//output result
	for (int i = 0; i < size; i++) {
		printf("%i ",myArray[i]);
	}
	
	return 0;
} // end program
  