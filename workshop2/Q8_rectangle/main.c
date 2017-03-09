/* take area saure meter and with as 
 * inputs and print hight sof rectangle*/
#include <stdio.h>

int main(int argc, char **argv)
{
    float area, width;
	printf("Enter rectangle area in m^2 and width.\n");
    scanf("%f %f\n", &area, &width);
    float height = area/width;
    printf("Height of rectangle = %f m.\n", height);
    
    
	return 0;
}
