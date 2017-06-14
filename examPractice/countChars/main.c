#include <stdio.h>
#define MAXLEN 100

int main(int argc, char **argv)
{
    char myString[MAXLEN];
    int count = 0;
    
    printf("Enter a string\n");
    
    scanf("%s",myString);
    
    while(myString[count] != '\0') {
        count++;
    }
	printf("%s has %i charactors\n",myString,count);
	return 0;
}
