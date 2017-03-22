/*finds the two largest numbers of entered values*/
#include <stdio.h>

void findMaxes(void);

int main(int argc, char **argv) {
    findMaxes();
	return 0;
}


void findMaxes(void) {
    
   
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
	
	//find 2nd largest
    int max2 = myArray[0];
    for(int i = 1; i < howMany; i++){
        if(myArray[i] > max2  && myArray[i] < max) {
            max2 = myArray[i];
        }
    }
    printf("Max =  %i. 2nd Max = %i.\n",max,max2);
    // print result
}

