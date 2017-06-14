#include <time.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
    srand(time(NULL));   // should only be called once
    double x, y, z;
    
    for(int i = 0; i < 100; i++) {
        x = rand(); // Numbers bewteen 0 and RAND_MAX
        y = rand();
        z = rand();
        printf("%.1f %.1f %.1f\n",x,y,z);
    }
    
    for(int i = 0; i < 100; i++) {
        x = rand()%100; // Numbers bewteen 0 and 100
        y = rand()%100;
        z = rand()%100;
        printf("%.1f %.1f %.1f\n",x,y,z);
    }
    
    for(int i = 0; i < 100; i++) {
        x = rand()%10; // Numbers bewteen 0 and 10
        y = rand()%10;
        z = rand()%10;
        printf("%.1f %.1f %.1f\n",x,y,z);
    }
    
    for(int i = 0; i < 100; i++) {
        x = rand()/(double)RAND_MAX; // Numbers bewteen 0 and 1
        y = rand()/(double)RAND_MAX;
        z = rand()/(double)RAND_MAX;
        printf("%.3f %.3f %.3f\n",x,y,z);
    }
	printf("You're Welcome\n");
	return 0;
}
