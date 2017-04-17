#include <stdio.h>

void modifyArray(int *numsPtr, int size);

int main()
{
    printf("\n Example 1.\n");
    int array[3] = {10, 20, 30};
    int *arrayPtr = NULL;
    arrayPtr = array; // address of first element of array
    for (int i=0; i<3; i++)
    {
        // three statments below are the same
        printf("array[%d] = %d\n", i, array[i]);
        printf("array[%d] = %d\n", i, *(arrayPtr+i));
        printf("array[%d] = %d\n", i, *(array+i));
    }
    
    printf("\n Example 2.\n");
    int array1[3] = {10, 20, 30};
    int *array1Ptr = NULL;
    array1Ptr = array1 + 1; // pointer points to array[1]
    *array1Ptr = 70; // change array[1] to 70
    for (int i=0; i<3; i++)
    {
        printf("array[%d] = %d\n", i, array1[i]);
    }
    
    /* multiply each element by 2 */
    printf("\n Example 3.\n");
    int nums[3] = {10, 20, 30};
    for (int i=0; i<3; i++)
    {
        printf("nums[%d] = %d\n", i, nums[i]);
    }
    modifyArray(nums, 3);
    printf(" After function.\n");
    for (int i=0; i<3; i++)
    {
        printf("nums[%d] = %d\n", i, nums[i]);
    }
    
    // how many bits?
    // test by using int or double instead of char
    printf("\n Example of how many bits in a pointer.\n");
    char x[5];
    char *ptr = NULL;
    ptr = *x;
    printf("Size of pointer = %u bits\n",sizeof(ptr)); //prints 8
    printf("Size of array x = %u\n", sizeof(x)); //prints 5
    printf("Size of address x = %u\n", sizeof(&x)); //prints 8
    printf("%u\n",ptr); // i got 0 his got a large number
    printf("%u\n",ptr+1); //mine got 1 his got a lage number plus 1
 return 0;
}

void modifyArray(int *numsPtr, int size)
{
    for (int i=0; i<size; i++)
    {
        numsPtr[i] = numsPtr[i] * 2;
    }
}