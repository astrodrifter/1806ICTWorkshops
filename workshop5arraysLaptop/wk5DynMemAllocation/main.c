/* Repeatedly allocate memory for an array, fill it with
* random numbers, and print the array */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fillArray(int *, int);
void printArray(int *, int);
int main()
{
    int *ptrArray;
    int n;
    srand(time(NULL)); // seed the random number generator

    while (1) {
        scanf("%d", &n); // read in size of array
        ptrArray = calloc(n, sizeof(int)); // allocate memory
        if (ptrArray == NULL)
            break;
        fillArray(ptrArray, n);
        printArray(ptrArray, n);
        free(ptrArray); // free the memory
    }
 return 0;
}

/* fill array with random numbers between 0 to 9 */
void fillArray(int *numsPtr, int size)
{
    for (int i=0; i<size; i++)
    numsPtr[i] = rand()%10;
}
/* print array */
void printArray(int *numsPtr, int size)
{
    printf("array = [ ");
    for (int i=0; i<size; i++)
        printf("%d ", numsPtr[i]);
        printf("]\n");
} 
