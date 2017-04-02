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
    
    /*
     * myAlgorithm
     * 
     * for each i sum i's before and i's after and check if equal
     */
     
     int count = 0;
     for(int i = 0; i < size; i++)
     {
         int sum1 = 0;
         for(int j = 0; j < i; j++){
             sum1 += myArray[j];
         }
         int sum2 = 0;
         for(int k = i + 1; k < size; k++)
         {
             sum2 += myArray[k];
         }
         
         if(sum1 == sum2)
         {
             count++;
         }
     }
     
    printf("\nThis array has %i indexes where sum of elements before\n equal sum of elements after.\n\n",count);
	return 0;
}
