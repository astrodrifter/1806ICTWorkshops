#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

void upperLower(char *word) {
    int i = 0;
    while(word[i] != '\0') {
        if(islower(word[i])) {
            word[i] = word[i] - 32;
        } else {
            word[i] = word[i] + 32;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    char myString[MAXLEN];
    
    printf("Enter a string\n");
    
    scanf("%s",myString);
    
    printf("myString before is %s\n",myString);
    
    upperLower(myString);
    
    printf("myString after is %s\n",myString);
    
	
	return 0;
}