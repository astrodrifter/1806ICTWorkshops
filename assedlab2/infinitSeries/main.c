#include <stdio.h>
#include <math.h>

double exponent(double power){
    double exp = 1.0;
    exp = exp + power/1;
    for (int i = 1; i <= power; i++){
        
        int factorial = power;
        for(int j = power-1; j > 1; j--){
            factorial = factorial*j;
        }
        printf("factorial = %i\n", factorial);
        exp = pow(power,i)/factorial;
        printf("exp = %f\n",exp);
    }
    return exp;
}

int factorial(int num)

int main(int argc, char **argv)
{
    double target;
    target = exponent(3);
    printf("target = %f\n",target);
    
	
	return 0;
}

