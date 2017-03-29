#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandInt(int, int);

int main()
{
    int guess, response;
    printf("think of a number between 1 & 1000.\n");
    printf("i will try to guess it!\n");
    printf("if I'm right, write 0.\nif i'm higher than your number, write 1.\nif i'm lower, write 2.\n");

    // initialise thread generator state
    srand(time(NULL));
    // begin with random number range of [0, 1000]
    int minBound = 0, maxBound = 1000;
    // keep refining guess criteria range through warmer/colder means until user affirms correct guess
    do {
        guess = getRandInt(minBound, maxBound);
        printf("is it %d? ", guess);
        scanf("%d", &response);
        if(response == 1)
            // if warmer, previous guess = new minimum
            maxBound = guess;
        else if(response == 2)
            // if colder, previous guess = new maximum
            minBound = guess;
    } while(response != 0);
    printf("a-ha! so your number was %d!\nthanks for playing with me.\n", guess);

    return 0;
}

int getRandInt(int min, int max)
{
    // simple equation to get a random number between the range [min, max]
    return (rand() % (max - min)) + min;
}
