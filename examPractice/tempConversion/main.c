/*In this challenge, write a program that takes in three arguments, 
  a start temperature (in Celsius), an end temperature (in Celsius) 
  and a step size. Print out a table that goes from the start temperature 
  to the end temperature, in steps of the step size; you do not actually 
  need to print the final end temperature if the step size does not exactly match. 
  You should perform input validation: do not accept start temperatures less than 
  a lower limit (which your code should specify as a constant) or higher than an upper 
  limit (which your code should also specify). You should not allow a step size greater 
  than the difference in temperatures. 
*/
#include <stdio.h>

double getCel();
double getCel();
double convert(double cel);


int main(int argc, char **argv)
{
    double celStart, celFin, far;
    printf("Enter start and end celcius values between 0 and 200 degrees.\n");
    celStart = get();
    celFin = get();
    
    
    
	printf("hello world\n");
	return 0;
}

int getCel() {
    double val;
    scanf("%d",val);
    return val;
}

double convert(double cel) {
    double far;
    far = cel 9/5 + 32;
    return far;
}