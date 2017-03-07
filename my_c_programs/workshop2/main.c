#include <stdio.h>

int main(int argc, char **argv)
{
	int count;
    count = 0;
    // by we need to write count = in order to change counts valley.
    count = count+1; //when I use count++ I get an error
    printf("count = %d\n",count);
    return 0;
}
