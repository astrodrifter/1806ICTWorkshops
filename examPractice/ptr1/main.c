#include <stdio.h>

int main(int argc, char **argv)
{
    int myNum = 7;
    int *myPtr = myNum;
    printf("myNum = %i\n",myNum);
    printf("myPtr = %i\n",myPtr);
    printf("*myPtr = %i\n",*myPtr);
    printf("&myPtr = %i\n",&myPtr);
    
	return 0;
}
