/*Modify your program in Q10 so that blanks and capital letters are ignored in the 
  matching process. Under these new rules, the following are examples of palindromes:
  “Anna” “a man a plan a canal Panama” “Amy must I jujitsu my ma”
   * 
   * Dhruva O'Shea 30/04/17
   * 
*/
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
    return 0; 

}
