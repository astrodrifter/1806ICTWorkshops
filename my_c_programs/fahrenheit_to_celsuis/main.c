#include <stdio.h>

/*Page 8 of The C Programming Language exersise.
 * Create a program that converts Fahrenheit to Celsuis
 * and prints a tabe of converted given inputs,
 * starting at 0 and ending at 300 with stpe of 20.*/
 
int main(int argc, char **argv)
{
    int fahr, celsuis;  // variables
    
    // upper, lower limits and step
    int lower = 0;
    int upper = 300;
    int step = 20;
    
    fahr = lower;
    while ( fahr <= upper){
        celsuis = (5/9)*(fahr - 32);
        printf("%d\t%d\n", fahr, celsuis);
        fahr = fahr + step;
    }
	
}
