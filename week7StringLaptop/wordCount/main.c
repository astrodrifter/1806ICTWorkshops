/*Write a program that reads in a line of text, and prints out the number 
 * of words in that line of text. A word contains characters that are alphanumeric. 
 * Hint: Use the fgets() function.
 * 
 * Wee Lum Griffith Uni 
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MAXLEN 100

int countWords(char str[])
{
    int i=0;
    int count = 0;
    bool flag = false;
    while (str[i] != '\0')
    {
        if (isalnum(str[i]))
        {
            if (!flag) 
            {
                count++;
                flag = true; 
            }
        } else {
            flag = false;
        }
        i++; 
    }
   return count;
}

int main(int argc, char **argv)
{
   char str[MAXLEN];
   int count;
   while (fgets(str, sizeof(str), stdin) != NULL)
   {
    str[strlen(str)-1] = '\0';   // the last character is the newline. Replace with null
    count = countWords(str);
    printf("There are %d words in \"%s\"\n", count, str);
    }
    return 0; 
}