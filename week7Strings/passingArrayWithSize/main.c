#include <stdio.h>

/* get size input */
int getSize()
{
	int input;
	printf("Enter integer N for your N X N array:\n");
	scanf("%i",&input);
	printf("Size = %i\n", input);
	return input;
}
/* Fills array */
void fillArray(int a[][size], int size)
{
	printf("Enter 9 integers\n");
	int i, j;
	for (i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
		{
			scanf("%i",&a[i][j]);
		}
	}
}

/* prints array */
void printArray(int a[][size], int size)
{
	printf("You array is\n");
	int i, j;
	for (i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
		{
			printf("%i ",a[i][j]);
		}
		printf("\n");
	}
}


int main(int argc, char **argv)
{
	/* get size */
	int size;
	size = getSize();
	int myArray[size][size]; 
	fillArray(myArray, size);
	printArray(myArray, size);
	return 0;
}
