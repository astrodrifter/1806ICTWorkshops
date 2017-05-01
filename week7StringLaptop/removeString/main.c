/* b) Write a function called removeString() to remove a specified number of 
 * characters from a character string. The function takes three arguments: 
 * the source string, the starting index number in the source string, 
 * and the number of characters to remove.
 * 
 * Dhruva O'Shea 01/04/17
 * 
 * algorithm
    (1) find start
    (2) shift left from start plus length
    (3) enter nulls to fill original array
*/
#include <stdio.h>
#include <string.h>

#define MAXLEN 200 // define string maxlength

void removeString(char str[], int start, int length)
{
    
     for(int i = start; i < strlen(str); i++)
     {
         if(i > strlen(str) - length)  // if reach end of shortened string
         {
             str[i] = '\0';  // element is set to null
         } else {
            str[i] = str[i+length]; // esle shift characters left
         }
     }
}

void removeString1(char source[], int pos, int len) 
{
    strcpy(source+pos, source+pos+len); // im actually not quite sure how this works
}                                       // you are most welcome to explain to me if you know


int main(int argc, char **argv)
{   
	/* program start */
    printf("Program start.....\n\n");
    char str[MAXLEN], str1[MAXLEN];
    
    /* fill second array with nul */
    memset(str1, '\0', sizeof(str1));
    
    /* message */
    printf("Enter your string\n");
    
    /* input str */
    if( fgets ( str, MAXLEN, stdin) != NULL ) 
    {
        /* copy str to str1 */
        strcpy(str1, str);
        
        /* variable inputs */
        int start, length;
        printf("Enter start element\n");
        scanf("%i",&start);
        printf("Enter length\n");
        scanf("%i",&length);
        
        /* copy variables for second example str1 */
        int pos, len;
        pos = start;
        len = length;
        
        /* remove without strcpy() */
        removeString(str, start, length);
        
        /* remove with strcpy() */
        removeString1(str1, pos, len);
    
        /* outputs */
        printf("Without function:\n")
        puts(str);
        printf("With function:\n")
        puts(str1);
    }
    /*program finished */
	printf("\nProgram finished .... \n\n");
    
	return 0;
}