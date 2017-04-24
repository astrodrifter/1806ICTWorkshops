#include <stdio.h>

/* Fills array */
void fillArray(int a[][3])
{
	printf("Enter 9 integers\n");
	int i, j;
	for (i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
}

/* prints array */
void printArray(int a[][3])
{
	printf("You array is\n");
	int i, j;
	for (i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf("%i ",a[i][j]);
		}
		printf("\n");
	}
}


int main(int argc, char **argv)
{
	int myArray[3][4]; 
	fillArray(myArray);
	printArray(myArray);
	return 0;
}
