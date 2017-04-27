/* Write a program that reads in a word and a character. It prints out the word modified
   in such a way that every occurrence of the character in the word, is deleted.
    * 
	* Dhruva O'Shea 27/04/17
	*/
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000

int main(int argc, char **argv)
	{
	/* get String and int*/
	char word[MAXLENGTH], letter; // 1000 charactors of space available
	
	printf("Enter a string and a char in format string char:\n");
	scanf("%s %c",word,&letter);
	
	/* count how many charactors in string */
	int count = 0;
	while(word[count] != 0 && word[count])
	{
		count++;
	}
	
	/* while letter is there */
	int k = 0;
	while(word[i] != 0 && word[i])
	{
		
	}
	/* loop, find char, delete and shift left */
	int i = 0;
	while(word[i] != 0 && word[i])
	{
		if(word[i] == letter)
		{
			for(int j = i; j < count; j++)
			{
				word[i] = word[j+1];
				i++;
			}
			
		}
		i++;
	}
	printf("Your new string is %s\n",word);
	return 0;
}
