#include <stdio.h>


int main(int argc, char **argv)
{
    int size, status, temp, sum = 0;
    printf("Enter array size and then elements, all integers\n");
    scanf("%i",&size);
    int myArray[size];
    for(int i = 0; i < size; i ++) {
        status = scanf("%i",&myArray[i]);
        while(status!=1){
            while((temp=getchar()) != EOF && temp != '\n');
            printf("Array[%i] was invalid input... \nEnter it again along with all trailing elements: \n",i);
            status = scanf("%d", &myArray[i]);
        }
    }
    
    for(int i = 0; i < size; i ++) {
        sum+=myArray[i];
    }
    
    printf("Sum = %i\n",sum);
	return 0;
}
