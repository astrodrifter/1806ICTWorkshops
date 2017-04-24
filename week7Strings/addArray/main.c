#include <stdio.h>

int add(int a[][4])
{
	int sum = 0, i, j;
	for (i=0; i < 3; i++)
	{
		for (int j=0; j<4; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}

int main(int argc, char **argv)
{
	int myArray[3][4] = {{1, 2, 3, 4,},
						  {5, 6, 7, 8}, 
						  {9, 10, 11, 12}}; 
	int result = 0;
	result = add(myArray);
	printf("Sum: %d\n",result);
	return 0;
}
