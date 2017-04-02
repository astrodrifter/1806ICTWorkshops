/*Write a program that reads in the size of an array and the array elements (all of which
are integers). Find the number of indexes in the array such that the sum of elements
at lower indexes is equal to the sum of elements at higher indexes. For example given
an array {-7, 1, 5, 2, -4, 3, 0}, one of such indexes is index 3 because
-7 + 1 + 5 = -4 + 3 + 0
Given the same array, another of such indexes is index 6 because
-7 + 1 + 5 + 2 – 4 + 3 = 0
Therefore, the number of such indexes in the given array would be 2.
 * 
 * Dhruva O'Shea 03/04/17
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//get array
    int size;
	printf("Enter the size of your array and then the elements.\n");
	scanf("%i",&size);
	int myArray[size];
	for(int i = 0; i < size; i++) 
    {
		scanf("%i",&myArray[i]);
	}
	return 0;
}
