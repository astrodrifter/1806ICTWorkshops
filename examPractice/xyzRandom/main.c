#include <time.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
    srand(time(NULL));   // should only be called once
    double x, y, z;
    for(int i = 0; i < 100; i++) {
        x = rand()%10;
        y = rand()%10;
        z = rand()%10;
        printf("%.1f %.1f %.1f\n",x,y,z);
    }
	printf("You're Welcome\n");
	return 0;
}
