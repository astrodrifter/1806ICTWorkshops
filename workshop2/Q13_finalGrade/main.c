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
    float gradeMinScore, myCurrentScore; 
	//Get user's desired grade
    printf("What grade would you like to achive?\n");
    printf("Enter H, D, C, P or F:\n");
    //scanf("%c ", &grade);
    grade = getchar();
    //Get minimum score required for desired grade
    printf("Enter the minimum score to get your desired grade?\n");
    scanf("%f",&gradeMinScore);
    //Get user's current grade
    printf("Enter your current grade?\n");
    scanf("%f",&myCurrentScore);
    
    //Get final exam percent of total mark
    //calculate
    //print reult
	return 0;
}
