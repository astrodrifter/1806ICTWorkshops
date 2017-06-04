#include <stdio.h>

void reverse(char *str)
{
    if(*str)
    {
        reverse(str+1);
        printf("%s",*str);
    }
}

int main(int argc, char **argv)
{
    char str[20] = "hello world";
    
    reverse(*str);
	return 0;
}
