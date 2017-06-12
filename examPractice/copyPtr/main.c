#include <stdio.h>

void swap(char *a, char *b) {
    char *temp = NULL;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char **argv)
{
    char a = 'p', b = 'd';
    char *ptrA = NULL, *ptrB = NULL;
    ptrA = &a;
    ptrB = &b;
	printf("%c %c\n",a,b);
    swap(ptrA,ptrB);
    printf("%c %c\n",a,b);
	return 0;
}
