/*Write a program that reads in a word and two characters. It prints out the word
  modified in such a way that every occurrence of the first character is replaced with the
  second character. 
   * 
   * Dhruva O'Shea 27/04/17
   * 
* */
   
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000

int main(int argc, char **argv)
	{
	/* get String and char */
	char word[MAXLENGTH], letter, letter2;
	printf("Enter a string and two chars format string char char:\n");
	scanf("%s %c %c",word,&letter, &letter2);
	
	/* loop find char and replace */
	int i = 0;
	while(word[i] != 0 && word[i])
	{
		if(word[i] == letter)
		{
			word[i] = letter2;
		}
		i++;
	}
	printf("Your new string is %s\n",word);
	return 0;
}
