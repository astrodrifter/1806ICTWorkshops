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

int main(int argc, char **argv)
{
	//1. get and set users number
	int userNum = getUserNum();
	//
	printf("userNum = %i\n",userNum);
	return 0;
}

int getUserNum(){
	int userNum;
	printf("\nPick an integer between 1 and 1000.\nHAL 9000 will try to guess it.\t");
	scanf("%i",&userNum);
	return userNum;
}