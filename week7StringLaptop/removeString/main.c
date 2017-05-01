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


int main(int argc, char **argv)
{   
	/* program start */
    printf("Program start.....\n\n");
    char str[MAXLEN];
    printf("Enter your string\n");
    if( fgets ( str, 195, stdin) != NULL ) 
    {
        int start, length;
        printf("Enter start element\n");
        scanf("%i",&start);
        printf("Enter length\n");
        scanf("%i",&length);
        
        removeString(str, start, length);
    
        puts(str);
    }
    /*program finished */
	printf("\nProgram finished .... \n\n");
    
	return 0;
}