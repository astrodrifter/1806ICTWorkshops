#include <stdio.h>
int sumDigits(int a, int b);

int sumDigits(int a, int b) {
    int result = a + b;
    return result;
}

int main(int argc, char **argv)
{
	if(sumDigits(5,4)){
        printf("\n\nTrue\n\n");
    }
	return 0;
}
