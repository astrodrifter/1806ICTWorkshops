#include <stdio.h>
#include <string.h>
#define MAXLEN 100

void shiftLeft(char *word) {
    int i, j;
    char temp, first;
    for(j = 0; j < strlen(word); j++) {
        
        i = 0;
        first = word[i];
        while(word[i] != '\0') {
            temp = word[i+1];
            word[i] = temp;
            i++;
        } 
        word[i-1] = first;
        printf("word after is %s\n",word);
    }
}

void printReverse(char *word) {
    for(int i = strlen(word)-1; i >= 0; i--) {
        printf("%c",word[i]);
    }
    printf("\n");
}

void reverse(char *word) {
    char temp;
    int i = 0, middle = strlen(word)/2;
    //for(i = 0; i < strlen(word); i++) {
    while(word[i] < middle+1) {
        temp = word[i];
        printf("temp = %c",temp);
        word[i] = word[strlen(word)-1-i];
        word[strlen(word)-1-i] = temp;
        i++;
        printf("%s\n",word);
    }
}
int main(int argc, char **argv) {
    char word[MAXLEN];
    printf("Enter a word\n");
    scanf("%s",word);
    printf("word before is %s\n",word);
    //printReverse(word);
    //shiftLeft(word);
    reverse(word);
    printf("word after is %s\n",word);
    
	return 0;
}
