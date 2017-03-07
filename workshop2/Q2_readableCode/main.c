#include <stdio.h>

int main(int argc, char **argv)
{
    /*Initiate floats*/
    float num1, num2, num3, average;
    /*Call for user input*/
    printf("\nTo find avergae, enter three differnet numbers\n");
    /*Get user input*/
    scanf("%f %f %f", &num1, &num2, &num3);
    /*Calculate average*/
    average = (num1+num2+num3)/3.0;
    /*Print average*/
    printf("Average = %f\n\n", average);
    return 0;
}
