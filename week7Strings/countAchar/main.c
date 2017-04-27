/* takes a string and a char and find how many times that char 
 * appears in the string.
 * 
 * Dhruva O'Shea 26/04/17
 * 
 * Steps:
 * (1) get string
 * (2) take char
 * (3) loop and count
 * 
 */

#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000

int main(int argc, char **argv)
	{
	/* get String */
	char word[MAXLENGTH], letter;
	printf("Enter a string and a char:\n");
	scanf("%s %c",word,&letter);
	/* get chart 
	printf("Enter a char\n");
	scanf("%c",&letter);
	count */
	int count = 0, i = 0;
	while(word[i] != 0 && word[i])
	{
		if(word[i] == letter)
		{
			count++;
		}
		i++;
	}
	printf("Your char appeared %i times\n",count);
	return 0;
}