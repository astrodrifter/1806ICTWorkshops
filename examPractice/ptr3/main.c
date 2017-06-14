#include <stdio.h>

void rearrange(int *array) {
    int temp;
    for(int i = 10; i > 0; i--) {
        temp = *array;
        *(array + i) = *(array - i);
        *(array - i) = temp;
    }
}
void swap(int *a, int *b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
int main(int argc, char **argv)
{
    int a = 1, b = 2;
    int * aPtr, *bPtr;
    aPtr = &a;
    bPtr = &b;
	printf("%i %i\n",a,b);
    swap(aPtr,bPtr);
    printf("%i %i\n",a,b);
    
    int myArray[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i < 10; i++) {
        printf("%i ",myArray[i]);
    }
    printf("\n");
    
    int *arrayPtr = myArray;
    for(int i = 0; i < 10; i++) {
        printf("%i ",*arrayPtr + i);
    }
    printf("\n");
    
    rearrange(arrayPtr);
    
    for(int i = 0; i < 10; i++) {
        printf("%i ",*arrayPtr + i);
    }
    printf("\n");
    
	return 0;
}
