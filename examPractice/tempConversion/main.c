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

void startMessage();
double getVal();
double getVal();
double convert(double cel);
void printResults(double celStart, double celFin, double step);

int main(int argc, char **argv)
{
    double celStart, celFin, step;
    startMessage();
    celStart = getVal();
    celFin = getVal();
    step = getVal();
    printResults(celStart, celFin, step);
    
    
	printf("hello world\n");
	return 0;
}

void startMessage() {
    printf("Enter start and end celcius values between\n");
    printf("0 and 200 degrees aswell as your step size.\n");
}

double getCel() {
    double val;
    scanf("%d",&val);
    return val;
}

double convert(double cel) {
    double fah;
    fah = cel*9/5 + 32;
    return fah;
}

void printResults(double celStart, double celFin, double step) {
    for(double i = celStart; i < celFin; i= i+step) {
        printf("%d.2 Celcius = %d.2 Fahrenheit,\n",celStart+i,convert(celStart+i));
    }
}