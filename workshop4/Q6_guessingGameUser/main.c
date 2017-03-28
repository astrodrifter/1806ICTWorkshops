/*Write a program that plays the game “Guess a number”.
	a. The program will initially choose an integer number 
	  * (from the range 1 to 1000) to be guessed.
	b. The program will prompt the user to enter a guess.
	c. If the guess is correct, the program will output “Congratulations! You guessed it!”
	d. If the guess is incorrect, the program will either output “Too low, please guess again.”
		or “Too high, please guess again”, depending on whether the guess is lower or higher
		than the correct answer.
	e. The program will loop infinitely until the user guesses correctly.
		use functions in your program.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void startMessage();
int generateNumber();
int getGuess();
int checkGuess(int, int);
int playAgain();

int main(int argc, char **argv)
{
	int play = 1;
	while(play == 1) {
		
		//1. generate  number between 1 and 1000
		int num;
		startMessage();
		srand(time(NULL));
		num = generateNumber();
	
		//2. get user guess - useres guess is checked  getGuess().
		int guess;
		guess = getGuess(num);
		
		//3. play again?
		play = playAgain();
	
	}
	return 0;
	
}

//displays game start message
void startMessage(){
	printf("\nGuess my number beteen 1 and 1000.\n\n");
}

// generates number
int generateNumber(){
	return rand()%1000+1;
}

// gets user guess and checks against computers number
int getGuess(int num){
	int guess;
	printf("Enter your integer guess:\t");
	scanf("%i",&guess);
	printf("\n");
	int result;
	result = checkGuess(num, guess);
	
	if(result == 0){
		printf("\nYou guess right!\n\n");
		return 0;
	} else if(result == 1){
		
		printf("\tYou guessed too low.\n\n");
		getGuess(num);
	} else if ( result == 2){
		
		printf("\tYou guessed too high.\n\n");
		getGuess(num);
	}
}

// checks guess 
int checkGuess(int num, int guess){
	if(num == guess){
		return 0;
	} else if (guess < num){
		return 1;
	} else if (guess > num){
		return 2;
	}
	
	
}

// checks if user wants to play again
int playAgain(){
	int play;
	printf("\nWould you like to play again?\n");
	printf("Enter 0 for no and 1 for yes.\n");
	scanf("%i",&play);
	return play;
}