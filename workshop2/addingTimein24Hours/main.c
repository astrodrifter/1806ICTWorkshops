/*This project will add time. Given one time, choose another 
 * time in HH:MM:SS, using 24hr time*/
#include <stdio.h>

int main(int argc, char **argv)
{
	//set original time in 24hr
    int hours1, hours2, minutes1, minutes2,  // varaiable
    seconds1, seconds2, newHours, newMinutes,
    newSeconds;
    
    hours1 = 11;  //arbitrary time set
    minutes1 = 23;
    seconds1 = 42;
    printf("\nCurrent time is %i:%i:%i.\n\n", hours1, minutes1, seconds1); //print time to user
    printf("Enter a new time in 24hr time for addition.\n");
    //instructions to user
    
    //get user imput for time to add
    printf("Enter HH:\n");
    scanf("%d", &hours2);
    printf("Enter MM:\n");
    scanf("%d", &minutes2);
    printf("Enter SS:\n");
    scanf("%d", &seconds2);
    
    
    //add the two times
    newHours = hours1 + hours2;
    if (newHours > 24) { 
        newHours = newHours%24;
        printf("One day has past.\n");
    }
    newMinutes = minutes1 + minutes2;
    if ( newMinutes%60 > 0) {
        newHours++;
        newMinutes = newMinutes%60;
    }
    newSeconds = seconds1 + seconds2;
    if (newSeconds%60 > 0){
        newMinutes++;
        newSeconds=newSeconds%60;
    }
    //print
    printf("Your new time is %i:%i:%i.\n\n", newHours, newMinutes, newSeconds);
	return 0;
}
