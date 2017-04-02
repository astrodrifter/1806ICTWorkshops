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
    
    //check for zero
    for(int i = 0; i < size; i++) 
    {
        if(myArray[i] == 0 ) 
        {
            for(int j = i; j < size; j++) // look for next odd number
            {
                if(myArray[j]%2 == 1) // if odd 
                {
                    myArray[i] = myArray[j]; // replace zero with it
                }
            }
        }
    }
    
    //output result
    for(int i = 0; i < size; i++)
    {
        printf("%i ",myArray[i]);
    }
	return 0;
}
