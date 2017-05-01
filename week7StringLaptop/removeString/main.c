/* b) Write a function called removeString() to remove a specified number of 
 * characters from a character string. The function takes three arguments: 
 * the source string, the starting index number in the source string, 
 * and the number of characters to remove.
 * 
 * Dhruva O'Shea 01/04/17
 * 
*/

#include <stdio.h>
#include <string.h>

#define MAXLEN 200 // define string maxlength

void removeString(char str[], int start, int length)
{
    /* algorithm
     * find start
     * find finish
     * shift left
     * enter nulls
     */
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


int main(int argc, char **argv)
{   
	/* program start */ 
    printf("Enter your string\n");
    char str[MAXLEN];
    scanf("%s",str);
    
    removeString(str, 4, 6);
    
    puts(str);
    /*program finished */
	printf("\nProgram finished .... \n");
    
	return 0;
}