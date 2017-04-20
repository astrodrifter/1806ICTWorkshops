#include <stdio.h>

/* My solution
 * (1) Get dates
 * (2) Get days passed in the year of dates given
 *      (a) use ana array with days of each month
 *      (b) check if leep year change feb to 29 days
 * (3) Count years between dates and multiply by 365
 * (5) Count leep years and add count to total of (3)
 * (6) Add days from (3) and (4) and minus days from (2)
 *  from the earliest date.
 * 
 * Dhruva O'Shea 20/04/17
 */ 

int isLeapYear(int year){
    if(year%4 == 0 && year%100 !=0){
        return 1;
    } else {
        return 0;
    }
}

int daysInMonth(int month, int year){
    //array of days in each month of the year starting from Jan and ending in Dec
    int monthDays[12] = {30,28,31,30,31,30,31,31,30,31,31,31};
    
    //check if leap year
    if(isLeapYear(year))
    {
        monthDays[1] = 29;
    } 
    
    //count days in year
    int days = 0;
    for(int i = month-1; i > 0; i--)
    {
        days += monthDays[i];
    }
    return days;
}

int main(int argc, char **argv)
{
    //inputs year 1
    int year1, month1, dayOfMonth1, daysInCurrentYear1;
    printf("Enter earliest date in format yyyy mm dd.\n");
    scanf("%i %i %i",&year1, &month1, &dayOfMonth1);
    
    //input year 2
    int year2, month2, dayOfMonth2, daysInCurrentYear2;
    printf("Enter latest date in format yyyy mm dd.\n");
    scanf("%i %i %i",&year2, &month2, &dayOfMonth2);
    
    //count days in current year 1
    daysInCurrentYear1 = daysInMonth(month1, year1) + dayOfMonth1;
    printf("there are %i days in your earliest year.\n", daysInCurrentYear1);
    
    //count days in current year 2
    daysInCurrentYear2 = daysInMonth(month2, year2) + dayOfMonth2;
    printf("there are %i days in your latest year.\n", daysInCurrentYear2);
    
    
    //count years inbetween
    int yearsDifference = year2 - year1;
    printf("Years difference = %i\n",yearsDifference);
    
    //how many days in years differnec
    int daysInYears = yearsDifference*365;
    
    //count leap years in yearsDifference
    int count = 0;
    for(int i = year2; i >= year1; i--)
    {
        if(isLeapYear(i)) 
        {
            count++;
        }
    }
    
    //add leap year days to dasy in years
    int totalDays = daysInYears + count + daysInCurrentYear2 - daysInCurrentYear1;
    
    //print answer
    printf("total days = %i days\n",totalDays);
    
	return 0;
}
