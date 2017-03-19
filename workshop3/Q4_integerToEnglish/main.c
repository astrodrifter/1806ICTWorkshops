/*takes a integer number and prints each didgit in english*/

#include <stdio.h>

int main(int argc, char **argv) {   
    // get num
	int num;
    printf("Eneter an integer value:\t");
    scanf("%i", &num);
    
    // mach each didgit to english word
    // use a while loop that gets each digit with %
    int t = num;
    int remainder;
    
    while (t != 0) {
        remainder = t % 10;
        switch(remainder){
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
      }
      t = t / 10;
   }
   printf("\n");
	return 0;
}
