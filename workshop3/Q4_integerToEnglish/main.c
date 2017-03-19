/*takes a integer number and prints each didgit in english*/

#include <stdio.h>
int getNum(int);
void printWords(int);

int getNum(int n) 
{
    printf("Eneter an integer value:\t");
    scanf("%i", &n);
    return n;
}

void printWords(int num) 
{
    int t = num;
    int remainder;
    
    // mach each didgit to english word
    // use a while loop that gets each digit with %
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
}


int main(int argc, char **argv) {  
    
    
    // get user integer
    int num = 0;
    num = getNum(num);
    printWords(num);
    
	return 0;
}
