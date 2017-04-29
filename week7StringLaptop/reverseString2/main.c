#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000
/* takes string and string size and reverses it suiing poointers */
void reverseWord(char *word, int size)
{
    int c, i, j;
    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        c = word[i];
        word[i] = word[j];
        word[j] = c;
    }
}
int main(int argc, char **argv)
{
    /* get String */
    char word[MAXLENGTH];
    printf("Enter a string\n");
    scanf("%s",word);
  
    /* get size of string */
    int size = strlen(word);
    printf("size = %i\n",size);
  
    /* reverse string */
    reverseWord(word, size);
  
    printf(" Your string reversed is '%s'\n",word);
    return 0;
}