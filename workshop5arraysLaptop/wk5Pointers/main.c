#include <stdio.h>

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
    
    //notes on pointers
    // assigned unused poiters to NULL
    
    
	return 0;
}
