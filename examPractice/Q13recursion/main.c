#include <stdio.h>

int test(int x, int y)
{
    if(x <= y)
    {
        return y-x;
    } else {
        return test(x-1, y + 1);
    }
}
int main(int argc, char **argv)
{
    int n;
    n = test(15, 7);
	printf("%i\n", n);
	return 0;
}
