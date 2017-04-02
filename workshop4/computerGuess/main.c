#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 1000

#define HI 1
#define LO 2

int guessAgain(int a, int b)
{	
	return (a+b)/2; // a + (b-a)/2;	
}

void guessingGame(void)
{
	int num, response;
	int hiGuess=MAX, loGuess=MIN;
	
	printf("Please select a number between 1 and 1000 and I will guess your number\n");
	printf("Ready, set, go!\n");
	
	// the initial number guessed
	num = MIN + rand()%MAX;
	
	printf("Is your number = %d?\n", num);
	printf("Enter 0 for yes, 1 for too high, 2 for too low\n");
	scanf("%d", &response);
	
	while (response!=0)
	{
		if (response==HI)
		{
			hiGuess = num;
		}
		else
		{
			loGuess = num;
		}
		num = guessAgain(loGuess, hiGuess);		
		printf("Is your number = %d?\n", num);
		printf("Enter 0 for yes, 1 for too high, 2 for too low\n");
		scanf("%d", &response);
	}
	
	printf("Yahoo! I guessed it!\n");	
}

int main(int argc, char **argv)
{
	srand(time(NULL));
	guessingGame();
	return 0;
}

