#include <stdio.h>

int main(int argc, char **argv)
{
	int myArray[4] = {108, 17, -3, 24};
    //myArray[1] = 108;
    int i = 0;
    while(i < 4){
        printf("%i\n ", myArray[i]);
        
        i=i+1;
    }
    
	return 0;
}
