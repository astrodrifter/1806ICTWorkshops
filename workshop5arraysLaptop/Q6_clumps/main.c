/*Write a program that reads in the size of an array and the array elements (all of which
are integers). Say that a “clump” in the given array is a series of 2 or more adjacent
elements of the same value. Your program will print out the number of clumps in the
given array.
 * 
 * Dhruva O'Shea 02/04/17
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
    
    //check for clumps
    int count = 0; //initiate as 0
    for(int i = 0; i < size; i++) 
    {
        if(myArray[i] == myArray[i+1] && myArray[i+2] != myArray[i]) 
        {
            count++;
        }
    }
    
    //if all numebrs equal then one clumps
    int count1 = 0; //initiate as 0
    for(int i = 0; i < size-1; i++) 
    {
        if(myArray[i] == myArray[i+1]) 
        {
            count1++;
        }
    }
    if(count == 0 && count1 > 0)
    {
        count = 1;
    }
    
    printf("There are %i clumps\n",count);
	return 0;
}
