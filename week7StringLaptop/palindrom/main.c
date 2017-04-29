/*A palindrome is a string phrase that reads the same backwards as well as forwards. 
 * Examples of palindromes are “ABCDCBA”, “otto”, “i am ma i”, “C”. 
 * Write a program that reads in a line of text, and prints out whether or not that 
 * line of text is a palindrome.
 * 
 * Dhruva O'Shea 29/04/17
 * 
 * (1) Get string
 * (2) reveser string 
 * (3) comapre strings
 * */
 
#include <stdio.h>
#include <string.h>

#define MAXLEN 100

void removeSpace(char *str, char *strCondenced)
{
    int i;
    int j = 0;
    
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            i++;
        }
        strCondenced[j] = str[i];
        j++;
    }
}
void reverseString(char *str, char *reversedStr)
{
    int i;
    for (i=strlen(str)-1; i>=0; i--)
    {
        *reversedStr++ = *(str+i);
    }
        *reversedStr = '\0';
}

int main(int argc, char **argv)
    {
    char str[MAXLEN];
    char strCondenced[MAXLEN];
    char reversedStr[MAXLEN];
    while (fgets(str, sizeof(str), stdin) != NULL)
    {
        str[strlen(str)-1] = '\0';   // the last character is the newline. Replace with null
        removeSpace(str, strCondenced);
        printf(" space romved  = %s\n",strCondenced);
        reverseString(strCondenced, reversedStr);
        printf(" space romved reverse  = %s\n",reversedStr);
        if (strcmp(strCondenced, reversedStr) == 0)
            printf("%s is a palindrome\n", str);
        else
            printf("%s is not a palindrome\n", str);
}
return 0; }