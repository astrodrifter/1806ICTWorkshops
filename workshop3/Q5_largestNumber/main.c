/*find largest number of entered values*/
#include <stdio.h>

void findMax(void);

int main(int argc, char **argv) {
    findMax();
	return 0;
}


void findMax(void) {
    
   
    //get input
    int howMany; //ask how many numbers to compare
    printf("How many integers will you compare? ");
    scanf("%i", &howMany);
    
    //create array and loop inputs
    int myArray[howMany];
    for(int i = 0; i < howMany; i++){
        printf("Enter number %i: ",i+1);
        scanf("%i", &myArray[i]);
    }
    
    //find largest
    int max = myArray[0];
    for(int i = 1; i < howMany; i++){
        if(myArray[i] > max) {
            max = myArray[i];
        }
    }
    printf("Your max number is %i.\n",max);
    // print result
}
