#include <stdio.h>
#include <string.h>

#define MAXLENGTH 50

int main(int argc, char **argv)
{
	/* get String */
	char word[MAXLENGTH];
	printf("Enter a string\n");
	scanf("%s",word);
	printf(" Your string is '%s'\n",word);
	
	/* find length of string with strlen() */
	int stringLength = strlen(word);
	printf(" Your string is %i characters long\n",stringLength);
	
	/* find string length without strlen() */
	int count = 0, i = 0;
	while(word[i] != 0)
	{
		count++;
		i++;
	}
	printf(" Your string is %i characters long\n",count);
	return 0;
}
