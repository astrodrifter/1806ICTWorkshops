/*takes an input of seconds and finds hours, minutes and seconds*/
#include <stdio.h>

int main(int argc, char **argv)
{
    //variables
    int seconds, h, m, hours, minutes, 
    remainderHours, remianderMinutes,
    remainderSeconds;
    
    //Get user input
    printf("Enter seconds: ");
    scanf("%i", &seconds);
    
    //Find how many hours
    remainderHours = seconds%(60*60);
    h = (float)seconds/(60*60);
    hours = (int) h;
    
    //find remainding minutes
    remianderMinutes = h%60;
    m = remainderHours/60;
    minutes = (int) m;
    
    //find remianing seconds
    remainderSeconds = m%60;
    
    //print results
	printf("%i hours, %i minutes and %i seconds.\n", hours, minutes, remainderSeconds);
	return 0;
}
