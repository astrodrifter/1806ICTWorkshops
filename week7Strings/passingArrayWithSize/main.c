#include <stdio.h>

/* PROTOTYPES */
void fillArray(int a[100][100], int size);
void printArray(int a[100][100], int b[], int c[], int size);
void sumRows(int a[100][100], int size);
void sumCols(int a[100][100], int size);
void getRowTotals(int a[], int size);
void getColTotals(int a[], int size);

int main(int argc, char **argv)
{
	/* get size */
	int size;
	size = getSize();
	/* get array */
	int myArray[size][size]; 
	fillArray(myArray, size);
	/* get row totals */
	int rowTotals[size];
	getRowTotals(rowTotals,size);
	/* get column totals */
	int colTotals[size];
	getColTotals(colTotals,size);
	/* print data */
	printArray(myArray,rowTotals,colTotals,size);
	/* sum rows and columns */
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
void printArray(int a[100][100], int b[], int c[], int size)
{
	/* print puzzle array */
	printf("\nYou array is:\n");
	int i, j;
	for (i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
		{
			printf("%i ",a[i][j]);
		}
		printf("\n");
	}
	/* print row totals */
	printf("\nRow Totals are:\n");
	int k;
	for(k=0; k<size; k++)
	{
		printf("%i ",b[k]);
	}
	/* print column totals */
	printf("\nColumn Totals are:\n");
	int l;
	for(l=0; l<size; l++)
	{
		printf("%i ",c[l]);
	}
}
/* get row totals */
void getRowTotals(a[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%i",a[i]);
	}
}
/* get column totals */
void getColTotals(a[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%i",a[i]);
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