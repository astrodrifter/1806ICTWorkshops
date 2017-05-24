/* use recursion to make a power function */
/* Dhruva O'Shea 24/05/17 */
#include <stdio.h>

int power(int base, int pow) {
	if(pow > 1) {
		return base*power(base, pow-1);
	} else {
		return base;
	}
}

int main(int argc, char **argv)
{
	int base, pow;
	printf("Enter base and power\n");
	scanf("%i",&base);
	scanf("%i",&pow);
	
	printf("%i^%i = %i\n",base, pow, power(base, pow));
	
	return 0;
}
