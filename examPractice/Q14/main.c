#include <stdio.h>
#define MAXNUM 1000000000
int main(void)
{
    int minimum = MAXNUM, number = 0;
    while (number >= 0)
    {
        scanf("%i", &number);
        if (number < minimum && number > -1)
            {
                minimum = number;
            } 
    }
    printf("%i\n", minimum);
    return 0;
}