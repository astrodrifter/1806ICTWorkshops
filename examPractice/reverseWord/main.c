#include <stdio.h>
#include <string.h>
#define MAXLEN 100

void reverse(char *word) {
    int i = 0;
    char temp;
    while(word[i] != '\0') {
        temp = word[i+1];
        word[i] = temp;
        
    }
}

void printReverse(char *word) {
    for(int i = strlen(word)-1; i >= 0; i--) {
        printf("%c",word[i]);
    }
    printf("\n");
}
int main(int argc, char **argv) {
    char word[MAXLEN];
    printf("Enter a word\n");
    scanf("%s",word);
    printf("word before is %s\n",word);
    printReverse(word);
    //reverse(word);
    //printf("word after is %s",word);
    
	return 0;
}
