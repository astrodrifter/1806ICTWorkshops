#include <stdio.h>

//prototypes
void swap1(int a, int b);
void swap2(int* a, int* b);
void sum(int *xPtr, int *yPtr, int *zPtr);
    
int main(int argc, char **argv)
{
    char ch = 'A';
    printf("%p\n",&ch); //hex adress
    printf("%u\n",&ch); //decimal address

    char *chPtr = &ch; //assigns address of ch to chPtr
    //print("chPtr = %p",chPtr);
    
    char c = 'A';
    char *chPtr1 = NULL;
    chPtr1 = &c;
    *chPtr1 = 'B';
    printf("chPtr = %c\n", c); //changes value of c
    
    float f = 1.234;
    float *fltPtr;
    fltPtr = &f;
    printf("%f\n",*fltPtr); // print what fltPtr points to
    
    // notes on pointers
    // assigned unused poiters to NULL
    
    // bad swap verses good swap
    //bad swap
    int x = 1, y = 2;
    swap1(x, y); // for some reason not working.
    printf("%d %d\n", x, y);
    
    //good swap
    swap2(&x, &y); // give address of x and y
    printf("%d %d\n", x, y);
    
    //sum using pointers
    int h = 1, i = 2, j;
    sum(&h, &i, &j);
    printf("%d + %d = %d\n", h, i, j);
    
    
	return 0;
}

void swap1(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    return;
}

void swap2(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

void sum(int *hPtr, int *iPtr, int *jPtr)
{
    *jPtr = *hPtr + *iPtr;
}