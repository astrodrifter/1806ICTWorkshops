/*prints n^2 with 0 < n < 10*/

#include <stdio.h>

int nSquared(int);

int nSquared(int n) {
    int result = n*n;
    return result;
}


int main(int argc, char **argv)
{
    for (int i = 0; i <= 10; i++){
        int result = nSquared(i);
        printf("n = %i, n^2 = %i.\n", i, result);
    }
	return 0;
}
