/*ascending sort take an input of 3 integers and sorts them in acsending order*/
#include <stdio.h>


//main
int main(int argc, char **argv)
{
	//variables
	int max;
	int max2;
	int min;
	
	
	int myArray[3];
	for(int i = 0; i < 3; i++)
	{
		printf("Enter integer %i\n",i+1);
		scanf("%i",&myArray[i]);
	}
	
	
	//find largest
    max = myArray[0];
    for(int i = 1; i < 3; i++)
	{
        if(myArray[i] > max) 
		{
            max = myArray[i];
        }
    }
	
	//find 2nd largest
	max2 = myArray[0];
	for(int i = 1; i < 3; i++)
	{
		if(myArray[i] > max2  && myArray[i] < max) 
		{
			max2 = myArray[i];
		}
	}
	
	//find min
	min = myArray[0];
	for(int i = 1; i < 3; i++)
	{
		if(myArray[i] < max2  && myArray[i] < max) 
		{
			min = myArray[i];
		}
	}
	printf("\n%i %i %i\n",max,max2,min);
	return 0;
	
}

