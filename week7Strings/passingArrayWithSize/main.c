#include <stdio.h>

/* PROTOTYPES */
void fillArray(int a[100][100], int size);
void printArray(int a[100][100], int size);
void sumRows(int a[100][100], int size);
void sumCols(int a[100][100], int size);

int main(int argc, char **argv)
{
	/* get size */
	int size;
	size = getSize();
	int myArray[size][size]; 
	fillArray(myArray, size);
	printArray(myArray, size);
	sumRows(myArray, size);
	sumCols(myArray, size);
	
	return 0;
}

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
void fillArray(int a[100][100], int size)
{
	printf("Enter %i integers\n",size*3);
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
void printArray(int a[100][100], int size)
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

/* sum rows */
void sumRows(int a[100][100], int size)
{
	int i, j, sum;
	for(i=0; i<size; i++)
	{
		sum = 0;
		for(j=0; j<size; j++)
		{
			sum+=a[i][j];
		}
		printf("row %i sum = %i\n",i,sum);
	}
}

/* sum columns */
void sumCols(int a[100][100], int size)
{
	int i, j, sum;
	for(i=0; i<size; i++)
	{
		sum = 0;
		for(j=0; j<size; j++)
		{
			sum+=a[j][i];
		}
		printf("column %i sum = %i\n",i,sum);
	}
}