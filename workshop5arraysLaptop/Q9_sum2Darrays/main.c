#include <stdio.h>

int main(int argc, char **argv)
{
    // get 2 2D arrays
    int rows, cols;
    printf("How many rows?\t");
    scanf("%i",&rows); // num rows
    
	printf("\nHow many cols?\t");
    scanf("%i",&cols); // num columns
    
    //initiate arrays
    int myArray1[rows][cols];
    int myArray2[rows][cols];
    int newArray[rows][cols];
    
    // nested loops to eneter values for array 1
    printf("Enter elements for array 1:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%i",&myArray1[i][j]);
        }
    }
    
    // nested loops to eneter values for array 2
    printf("Enter elements for array 2:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%i",&myArray2[i][j]);
        }
    }
    
    // nested loops to eneter values
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            newArray[i][j] = myArray1[i][j] + myArray2[i][j];
        }
    }
    
    //out put array to check- remove comments to check
    printf("Arrays summed.\n")
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%i ",newArray[i][j]);
        }
        printf("\n");
    }
    
    
	return 0;
}
