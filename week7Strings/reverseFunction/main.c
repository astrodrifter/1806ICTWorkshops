/* takes a string and reverses it without using a second array
 * 
 * Dhruva O'Shea 26/04/17
 * 
 * Steps:
 * (1) get word
 * (2) get size of word
 * (3) send poiinter to function
 * (4) use temps to revesrse
 */

#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000

/* takes string and string size and reverses it suiing poointers */
void reverseWord(char *word, int size)
{
	int ptrArray[size];
	for(int i = 0; i < size; i++)
	{
		ptrArray[i] = word+i;      // collects addresses in an array
		printf("%u ",ptrArray[i]); // prints address of elements for checking
	}
	
	int j = size-1;
	for(int i = 0; i < size; i++)
	{
		word[i] = &ptrArray+j;
		j--;
	}
	
}

int main(int argc, char **argv)
	{
	/* get String */
	char word[MAXLENGTH];
	printf("Enter a string\n");
	scanf("%s",word);
	
	/* get size of string */
	int size = strlen(word);
	printf("size = %i\n",size);
	
	/* reverse string */
	reverseWord(word, size);
	
	printf(" Your string reversed is '%s'\n",word);
	return 0;
}