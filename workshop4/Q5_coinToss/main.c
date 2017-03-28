/*Write a coin tossing program. The program should use a function flipCoin( ) that returns 0 for
tails and 1 for heads. Use a loop to flip the coin 1000 times, and count the number of times
each side of the coin appears.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flipCoin();

int main(int argc, char **argv)
{
	
	srand(time(NULL));
	int heads = 0;
	int tails = 0;
	
	for(int i = 0; i < 1000; i++) {
		if(flipCoin() == 1) {
			heads++;
		} else {
			tails++;
		}
	}
	printf("%i heads and %i tails.\n", heads, tails);
	return 0;
}


int flipCoin() {
	int toss = rand();
	if(toss%2 == 1){
		return 1;
	} else {
		return 0;
	}
}