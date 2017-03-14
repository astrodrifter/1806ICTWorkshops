/*Calculates exam grade needed to achive desired final grade.
 * first user is ask what grade they want to achive HD, D, C, P, etc
 * then user is asked to enter their current grade.
 * Then user is asked to eneter how much there final exam is worth 25 0 50 %
 * Program will calculate final exam grade needed and print.*/
#include <stdio.h>

int main(int argc, char **argv)
{
    //variables
    char grade;
    float gradeMinScore, myCurrentScore, percent, difference, scoreNeeded;
    
	//Get user's desired grade
    printf("What grade would you like to achive?\n");
    printf("Enter H, D, C, P or F:\n");
    grade = getchar();
    
    //Get minimum score required for desired grade
    //printf("Enter the minimum score to get your desired grade?\n");
    //scanf("%f",&gradeMinScore);
    
    //Get user's current grade
    printf("Enter your current grade?\n");
    scanf("%f",&myCurrentScore);
    
    //Get final exam percent of total mark
    printf("Is your exam worth 25 or 50 percent?\n");
    scanf("%f",&percent);
    
    //calculate
    switch (grade) {
        case 'H':
            gradeMinScore = 85;
            difference = gradeMinScore - myCurrentScore;
            
            // Depending on final exam laoding
            if (percent == 50){
                scoreNeeded = 2*difference;
            } else {
                scoreNeeded = 4*difference;
            }
            break;
            
        case 'D':
            gradeMinScore = 75;
            difference = gradeMinScore - myCurrentScore;
            
            // Depending on final exam laoding
            if (percent == 50){
                scoreNeeded = 2*difference;
            } else {
                scoreNeeded = 4*difference;
            }
            break;
            
        case 'C':
            gradeMinScore = 65;
            difference = gradeMinScore - myCurrentScore;
            
            // Depending on final exam laoding
            if (percent == 50){
                scoreNeeded = 2*difference;
            } else {
                scoreNeeded = 4*difference;
            }
            break;
            
        case 'P':
            gradeMinScore = 50;
            difference = gradeMinScore - myCurrentScore;
            
            // Depending on final exam laoding
            if (percent == 50){
                scoreNeeded = 2*difference;
            } else {
                scoreNeeded = 4*difference;
            }
            break;
            
        case 'F':
            gradeMinScore = 0;
            difference = gradeMinScore - myCurrentScore;
            
            // Depending on final exam laoding
            if (percent == 50){
                scoreNeeded = 2*difference;
            } else {
                scoreNeeded = 4*difference;
            }
            break;
    }
    //print result
    if (scoreNeeded <= 100) {
        printf("You need %.2f%% on your final exam.",scoreNeeded);
    } else {
        printf("You need %.2f%% on your final exam!...\n\n That's impossible!\n\n",scoreNeeded);
        printf("\tYou will fail this course :-(\n");
    }
	return 0;
}
