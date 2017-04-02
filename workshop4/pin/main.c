#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getDistance(double x, double y, double x2, double y2)
{

	return sqrt(pow(x-x2, 2) + pow(y-y2,2));
}


int main()
{
	
	int P = 5732;

	printf("input is: %i\n", P);
	int d1 = P / 1000;
	int d2 = P / 100 % 10;
	int d3 = P / 10 % 10;
	int d4 = P % 10;

	d1 = (d1 + 3) % 10;
	d2 = (d2 + 3) % 10;
	d3 = (d3 + 3) % 10;
	d4 = (d4 + 3) % 10;

	printf("output: %i%i%i%i\n", d3, d4, d1, d2);


	

	return 0;
}