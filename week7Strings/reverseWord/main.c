/* takes a string and reverses it
 * 
 * Dhruva O'Shea 26/04/17
 * 
 * Steps:
 * (1) get word
 * (2) declare anew array
 * (3) eneter char in reverse
 */

#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000

int main(int argc, char **argv)
	{
	/* get String */
	char word[MAXLENGTH],reversed[MAXLENGTH];
	printf("Enter a string\n");
	scanf("%s",word);
	
	/* count chars */
	int count = 0;
	while(word[count] != 0 && word[count])
	{
		count++;
	}
	
	/* use count in for loop and reverse chars */
	int j = count-1;
	for(int i = 0; i< count; i++)
	{
		reversed[i] = word[j];
		j--;
	}
	
	printf(" Your string reversed is '%s'\n",reversed);
	return 0;
}
