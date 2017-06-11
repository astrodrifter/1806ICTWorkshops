#include <stdio.h>


int main(int argc, char **argv)
{
    int size, sum = 0;
	printf("Enter array size and then elements, all integers\n");
    scanf("%i",&size);
    int myArray[size];
    for(int i = 0; i < size; i ++) {
        scanf("%i",&myArray[i]);
        if(myArray[i]) 
            printf("int\n");
        else
            printf("not int\n");
    }
    
    for(int i = 0; i < size; i ++) {
        printf("%i ",myArray[i]);
    }
    
	return 0;
}
