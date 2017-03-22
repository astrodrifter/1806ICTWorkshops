/*takes a integer number and prints each didgit in english*/

#include <stdio.h>
#include <math.h>


int howManyDigits(int);
int getNum(int);
void printWords(int, int);

int main(int argc, char **argv) {  
    
    //get number of digits
    int digits = 0;
    digits = howManyDigits(digits);
    
    // get user integer
    int num = 0;
    num = getNum(num);
    
    // print words
    printWords(num, digits);
    
	return 0;
}

//Requests how many digits there will be and stores in variable digits
int howManyDigits(int digits) {
    printf("How many didgits will your number have?\n");
    scanf("%i", &digits);
    return digits;
}

//Gets the integer to be converted
int getNum(int n) {
    printf("Eneter an integer value:\n");
    scanf("%i", &n);
    return n;
}

//Coverts each digit to words taking the integer (num) 
//and digits (number of digits) as parameters.
void printWords(int num, int digits) {
    int index = digits-1;
    int toWord;
	
	//handle negatives
    if(num < 0) {
		printf("negative ");
		num = num*-1; //convert to positive
	}
	
	//convert digits to words from left to right.6
    while (index >= 0) {
          toWord = num/(pow(10.0,index));
          
            //if(toWord !=0) {
                
                switch(toWord){
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
                num = num - toWord * pow(10.0,index);
                index--;
            //}
        
    }
    printf("\n");
        
} 
    
