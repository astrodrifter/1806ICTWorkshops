#include <stdio.h>

int main()
{
    int array[3] = {10, 20, 30};
    int *arrayPtr = NULL;
    arrayPtr = array;
    for (int i=0; i<3; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
        printf("array[%d] = %d\n", i, *(arrayPtr+i));
        printf("array[%d] = %d\n", i, *(array+i));
    }
 return 0;
}