#include <stdio.h>

int main(int argc, char **argv)
{
    int myNum = 7;
    int *myPtr;
    myPtr = &myNum; //myPtr = address of myNum
    printf("myNum = %i\n",myNum); //myNum = 7
    printf("myPtr = %i\n",myPtr); //address of myPtr
    printf("*myPtr = %i\n",*myPtr); //contents of what myPtr is pointing to (myNum)
    printf("&myPtr = %i\n",&myPtr); //contents of myPtr
    
	return 0;
}
