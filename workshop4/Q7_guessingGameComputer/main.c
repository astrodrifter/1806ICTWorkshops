/*Following on from Q6, now turn the problem in Q6 around.
	a. Ask the user to select a number, and the program will guess the number.
	b. The program will ask the user if the guess is correct, higher or lower.
	c. The user will enter an appropriate response accordingly (e.g. 0 for correct, 1 for higher,
	2  for lower)
	d. The program must implement a sensible guessing strategy.
		Use functions in your program.
		 * 
	Dhruva O'Shea 28/03/2017*/

#include <stdio.h>

int getUserNum();
int computerGuess(int, int);
int userCheckGuess();

int main(int argc, char **argv)
{
	int low = 0, high = 1000, userNum, compGuess, result = 1;
	//1. get and set users number
	userNum = getUserNum();
	
	//get computer guess
	while(result == 1) {
		compGuess = computerGuess( low, high);
	
		//check computer guess
		result = userCheckGuess();
	
		if (result == 1) {
			high = computerGuess;
			computerGuess(low, high);
		} else if (result == 2) {
			low = computerGuess;
			computerGuess(low, high);
		}
	}
	
	printf("HAL guessed correct!!!\n\nof course...\n");
	
	return 0;
}

int getUserNum() 
{
	int userNum;
	printf("\nPick an integer between 1 and 1000.\nHAL 9000 will try to guess it.\t");
	scanf("%i",&userNum);
	return userNum;
}

int computerGuess(int bottom, int top) 
{
	int halGuess = (top - bottom)/2;
	printf("top %i, bottom %i",top,bottom);
	printf("\nHAL guessed %i.\n",halGuess);
	return halGuess;
}

int userCheckGuess()
{
	int result;
	printf("\nIf HAL guessed right enter 0, too high 1, too low 2.\n");
	scanf("%i",&result);
	return result;
}