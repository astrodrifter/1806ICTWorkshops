/* Write a program that reads in 20 integer numbers, each of which is between 1 and 10,
   inclusive. Use an array to store the numbers as they are being read in, if and only if
   that number is not a duplicate of a number already read. Print out the array containing
   non-duplicate numbers.
    
1. create an array size 20
2. as each element is being entered check if it has been entered before
*/

#include <stdio.h>


int main()
{
    int arr[20];

	//Keeps track of how many elements we actually put into the array
    int count = 0;

    printf("Provide 20 int(s) between 1 & 10 (inclusive): ");
    for(int i = 0; i < 20; i++) {
		int tmp;
		scanf("%i", &tmp);
	
		if(tmp < 1 || tmp > 10) {
			printf("Invalid Input");
			return 0;
		}
		//We are only adding elements to the array that are unique!
		int found = 0;
		for(int i = 0; i < count; i++) {

			//Is arr[i] unique?
			if(tmp == arr[i]) {
			found = 1; //I guess not
			}
		}
		//If the element wasn't already found in the array, we add it to the array and increment count
		if(!found) {
			arr[count++] = tmp;
		}
	}

	//Not arrSize but count. If we use arrSize, we will print the null values in our array
    for(int i = 0; i < count; i++) {
	printf("%i ", arr[i]);
    }
    return 0;
}