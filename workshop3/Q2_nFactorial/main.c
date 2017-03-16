/*nFactorial prints factorials for 0 < n <= 10*/
#include <stdio.h>

//prototype
int nFactorial(int);

//Function
int nFactorial(int n) {
    int fact = 1;
    for (int j = 1; j <= n; j++){
        fact = fact*j;
    }
    return fact;
}

//main
int main(int argc, char **argv)
{
    for(int n = 1; n <= 10; n++){
        int nFact = nFactorial(n);
        printf("n = %i, n! = %i\n", n, nFact);
    }
	return 0;
}
