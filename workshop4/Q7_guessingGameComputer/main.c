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

//prototypes
int getUserNum();
int computerGuess(int, int);
int userCheckGuess();


//main
int main(int argc, char **argv)
{
	//variables
	int low = 0, high = 1000, userNum, compGuess, result = 1;
	
	//get and set user number
	userNum = getUserNum();
	
	//This is the heart of the program here
	//Computer will guess and user responds with 1 for high and 2 for low or 0 for correct
	//Once zero is entered loop will finish and so will program
	while(result != 0) {
		
		//computer will guess
		compGuess = computerGuess(low, high);
		printf("\n\tHAL guessed %i.\n",compGuess);
		
		// user tell if high, low or correct
		result = userCheckGuess();
		
		//based on user respnse conputer keeps guessing or loop is finished
		if (result == 1) {
			high = compGuess;
			result = computerGuess(low, high);
		} else if (result == 2) {
			low = compGuess;
			result = computerGuess(low, high);
		}
	}
	
	//When user enter 0 at userCheckGuess() computer has got the number.
	printf("\n\tHAL guessed %i.\n\n",compGuess);
	printf("HAL guessed correct!!!\n\n\tof course...\n\n");
	
	// prgram finishes
	return 0;
}

//Gets a number from user for computer to guess
int getUserNum() 
{
	int userNum;
	printf("\nPick an integer between 1 and 1000.\nHAL 9000 will try to guess it.\t");
	scanf("%i",&userNum);
	return userNum;
}

// computer guesses based on a simple halving algorythm
int computerGuess(int bottom, int top) 
{
	int halGuess = (top - bottom)/2 + bottom;
	return halGuess;
}

// user checks guess and respnds
int userCheckGuess()
{
	int result;
	printf("\nIf HAL guessed right enter 0, too high 1, too low 2:\t");
	scanf("%i",&result);
	return result;
}