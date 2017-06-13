#include <stdio.h>

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
    
	return 0;
}
