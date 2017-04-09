/* Golf game. You and two friends. randomly generate input scores for each hole.
 * At the end of each game add up score and report various statistics for each player.
 * Use rand() to genrate score for ech hole (0 < score < 11) 
 * Use arrays to store scores
 * A 1D array should be used to store par score for each hole
 * Use rand() to generate par for each hole (3 < = par < = 5)
 * Use 3-by-18 2D array for you and two other players.
 * Then report statistics...
 * 
 * Dhruva O'Shea created on 07/04/2017
 * 
 * 1. rand() a 1D array par for 18 hole
 * 2. rand() a 3x18 2D array of palyer scores
 * 3. sum each players scores
 * 4. report
 * */
 
#include <stdio.h>
#include <math.h>
int HOLES = 18;
int PLAYERS = 3;

int main(int argc, char **argv)
{
    srand(time());
    
    // variables
    int parScores[HOLES], playerScores[PLAYERS][HOLES], totalScores[3];
    
	//1. rand() a 1D array par for 18 hole
    for(int i = 0; i < HOLES; i++)
    {
        int r = rand()%10;
        if (r == 0)
        {
            r = rand()%10;
        }
        parScores[i] = r;
        
    }
    
    //print par scores (testing)
    printf("par for each hole,\n");
    for(int i = 0; i < HOLES; i++)
    {
        
        printf("%i ",parScores[i]);
    }
    printf("\n");
     
    
    //2. generate 2D array player scores
    for(int i = 0; i < PLAYERS; i++)
    {
        for(int j = 0; j < HOLES; j++)
        {
            int r = rand()%10;
            if (r == 0)
            {
                r = rand()%10;
                    if (r == 0)
                {
                    r = rand()%10;
                }
            }
            playerScores[i][j] = r;
        }
    }
    
    
    //print playerscores (testing)
    printf("player score each hole,\n");
    for(int i = 0; i < PLAYERS; i++)
    {
        for(int j = 0; j < HOLES; j++)
        {
            printf("%i ",playerScores[i][j]);
        }
        printf("\n");
    }
    
    
    //3. sum each palyers score
    for(int i = 0; i < PLAYERS; i++)
    {
        int sum = 0;
        for(int j = 0; j < HOLES; j++)
        {
            sum += playerScores[i][j];
        }
        totalScores[i] = sum;
        printf("player %i total score = %i\n",i+1,sum);
    }
    
    //find winner
    int i, min = 18*10, player;
    for(i = 0; i < 3; i++)
    {
        if(totalScores[i] < min)
        {
            min = totalScores[i];
            player = i;
        }
    }
    printf("The winner of the game is player %i with a score of %i,\n",player+1,totalScores[player]);
    
    
    // find avergae for each hole
    for(int j = 0; j < HOLES; j++)
    {
        double holeSum = 0, avg = 0;
        for(int i = 0; i < PLAYERS; i++)
        {
             holeSum += playerScores[i][j];
             printf("holeSum = %i\n",holeSum);
        }
        avg = roundf(holeSum/PLAYERS);
        printf("Average score for hole %i = %d.\n",i+1,avg);
    }
    /* address
    char ch = 'A';
    printf("%p\n",&ch); //hex adress
    printf("%u\n",&ch); //decimal address
     */
     
	return 0;
}
