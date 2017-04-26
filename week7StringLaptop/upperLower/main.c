#include <stdio.h>
#include <string.h>
#define MAXLENGTH 50

int main(int argc, char **argv)
{
    /* get String */
    char word[MAXLENGTH],word1[MAXLENGTH];
    printf("Enter a string\n");
    scanf("%s",word);
    printf(" Your string is '%s'\n",word);
    strcpy(word1,word);
    /* using toupper() and tolower() */
    int i = 0;
    while(word[i] != 0 && word[i])
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
    {
        word[i] = (tolower(word[i]));
    } else {
        word[i] = (toupper(word[i]));
    }
    i++;
    }
    printf(" Your new string With Functions is '%s'\n",word);


    /* without string functions */
    int j = 0;
    while(word1[j] != 0 && word1[j])
    {
        if (word1[j] >= 'A' && word1[j] <= 'Z')
    {
        int i = ((int)word1[j])+32;
        word1[j] = i + '0';
    } else {
        int i = ((int)word1[j])-80;
    word1[j] = i + '0';
    }
    j++;
    }
    printf(" Your new string Without Functions is '%s'\n",word);
    return 0;
}


