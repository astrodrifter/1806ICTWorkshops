/*Write a program that reads in the size of an array and the array elements 
 * (all of which are integers). Your program must rearrange the numbers in 
 * the array such that every 3 is followed by a 4. Do not move the 3’s, but 
 * every other number may move. The given array contains the same number of 
 * 3’s and 4’s. Every 3 has a number after it that is not a 3 or 4, and a 3 
 * appears in the array before any 4.
 * 
 * Dhruva O'Shea 30/03/17
 * 
 * */

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
	
	//for size times
	for(int i = 0; i < size; i++) {
		
		// find 3 and store next element in temp
		int temp;
		if(myArray[i] == 3 && myArray[i+1] != 4) {
			temp = myArray[i+1];
			
			// find 4 and replace with temp.
			for(int j = 0; j < size; j++) {
				if(myArray[j] == 4 && myArray[j-1] != 3 ) {
					myArray[j] = temp;
					myArray[i+1] = 4; // replace next element with 4
					break;
				}
			}
		}
		//output result
		printf("\n");
		for (int i = 0; i < size; i++) {
			printf("%i ",myArray[i]);
		}
		
	}
	//output result
	printf("\n\nFinal Array\n");
	for (int i = 0; i < size; i++) {
		printf("%i ",myArray[i]);
	}
	printf("\n");
	
	return 0;
} // end program
