#include <stdio.h>

int main(int argc, char **argv)
{
    float f = 2.5;
    float f2 = 4.5;
    int j = f + f2;
    int i = (int) f;
    
    printf("%f %d\n ", f, i);
    printf("%f % f %d\n ", f, f2, j);
    
    int x = 7;
    int y = 5;
    double d = x/(double)y;
    printf("%f \n", d);
	return 0;
}
