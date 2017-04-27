/* Write a program that reads in a word, and truncates it to n characters. If the word
   length is already shorter than n characters, it remains as it is. 
    * 
	* Dhruva O'Shea 27/04/17
	*/
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000

int main(int argc, char **argv)
	{
	/* get String and int*/
	char word[MAXLENGTH]; // 1000 charactors of space available
	int i;
	printf("Enter a string and an int in format string int:\n");
	scanf("%s %i",word,&i);
	
	/* Once j has reach integer i all folling chars will be change to null */
	int j = 0;
	while(word[j] != 0 && word[j]) //while element is not null loop
	{
		if(j == i || j > i) //if j >= i
		{
			word[j] = 0; //change elements to null
		}
		j++; //iterate
	}
	printf("Your new string is %s\n",word); //print truncated word
	return 0;
}
