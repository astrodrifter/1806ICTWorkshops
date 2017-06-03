#include <stdio.h>
char myFunction1(char c)
{
    if (c == ' ') {
        return '\n';
    }
    else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' ||
              c == 'u')
    {
        return c - 'a' + 'A';
    } else {
        return c; 
    }
}
void myFunction2(char * s)
{
    while (*s != '\0')
    {
        printf("%c", myFunction1(*s));
        s++; 
    }
}
int main(void)
{
    myFunction2("C programming requires care.");
    return 0; 
}