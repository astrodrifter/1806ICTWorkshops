/*Write a program that reads in a line of text, and prints out 
 * the number of words in that line of text. A word contains 
 * characters that are alphanumeric. Hint: Use the fgets() function.
 * 
 * Dhruva O'Shea 29/04/17
 * 
 * 
*/
#include <stdio.h>

int main(int argc, char **argv)
{
    /* program start */ 
    printf("\nProgram start .... \n\n");
    /* initialise string array for a sentance */
    char sentance[200];
    
    /* message */
    printf("Enter a sentance\n");
    
    /* if something is input by user put it in sentance[] */
    int count = 0;
    if( fgets ( sentance, 195, stdin) != NULL ) 
    {
       /* writing content to stdout */
       printf("\n\nYour sentance is\n");
       puts(sentance);
       
       /* count spacees or word seprations */
       for(int i = 0; i < 195; i++)
       {
           if(sentance[i] == ' ')
           {
               count++;
           }
       }
       
       /* print word count */
       printf("\nYour sentance has %i words.\n\n", count+1);
       
    }

    /*program finished */
	printf("\nProgram finished .... \n");
    
	return 0;
}
