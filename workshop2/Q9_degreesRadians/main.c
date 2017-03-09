#include <stdio.h>
#include <math.h>
/*Converts degrees to radians*/

int main(int argc, char **argv)
{
    float degrees, radians;
	printf("Enter your angle in degrees.\n");
    scanf("%f", &degrees);
    radians = (degrees * M_PI)/180;
    printf("Radinas = %f.\n", radians);
	return 0;
}
