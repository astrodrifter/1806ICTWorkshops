/* takes a string. 
 * Any lower case charactors are converted to uppercase and 
 * Any uppercase are converted to lower. Useing first 
 * toupper() and tolower() and gain without.
 * 
 * Dhruva O'Shea 26/04/17
 * 
 */

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
	
	/* using toupper()*/
	int i = 0;
	while(word[i] != 0 && word[i])
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			word[i] = (tolower(word[i]));
		} else {
			word[i] = (toupper(word[i]));
		}
		i++;
	}
	printf(" Your new string is '%s'\n",word);
	
	/* test *//*
	char ch = 'A';
	int ich = (int)ch;
	printf("%i\n",ich);
	*/ 
	int j = 0;
	while(word[j] != 0 && word[j])
	{
		if (word[j] >= 'A' && word[j] <= 'Z')
		{
			//printf("Character is Upper Case Letters\n");
			int i = ((int)word[j])+32;
			word[j] = i + '0';
		} else {
			//printf("Character is Not Upper Case Letters\n");
			int i = ((int)word[j])-80;
			word[j] = i + '0';
		}
		j++;
	}
   
	printf(" Your new string is '%s'\n",word);
	/* find ASCI table. Upper case are only a set number away from lower */
	return 0;
}
