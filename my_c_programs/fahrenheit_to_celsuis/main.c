#include <stdio.h>

/*Page 8 of The C Programming Language exersise.
 * Create a program that converts Fahrenheit to Celsuis
 * and prints a tabe of converted given inputs,
 * starting at 0 and ending at 300 with stpe of 20.*/
 
int main(int argc, char **argv)
{
    int fahr, celsuis;  // variables
    int lower, upper, step;
    
    // upper, lower limits and step
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while ( fahr <= upper){
        celsuis = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsuis);
        fahr = fahr + step;
    }
	
}
