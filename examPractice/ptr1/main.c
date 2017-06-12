#include <stdio.h>

int main(int argc, char **argv)
{
    int myNum = 7;
    int *myPtr;
    myPtr = &myNum; //myPtr = address of myNum
    printf("myNum = %i\n",myNum); //myNum = 7
    printf("myPtr = %i\n",myPtr); //address of myPtr
    printf("*myPtr = %i\n",*myPtr); //contents of what myPtr is pointing to (myNum) "dereferencing"
    printf("&myPtr = %i\n",&myPtr); //contents of myPtr
    *myPtr = 5; //changed contents of myNum to 5
    printf("myNum = %i\n",myNum); 
    printf("myPtr = %i\n",myPtr); 
    printf("*myPtr = %i\n",*myPtr); 
    printf("&myPtr = %i\n",&myPtr);
    
    
	return 0;
}
