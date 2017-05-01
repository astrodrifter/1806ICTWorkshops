/*(a) Right a function that find the posistion of a string within another string.
 * 
 * Dhruva O'Shea 30/04/17
 * 
*/

#include <stdio.h>
#include <string.h>

#define MAXLEN 100  // define maximum length of your strings

/* takes two strings, str1 and str2 and checks if str2 is in str1 */ 
int findString(char str1[], char str2[])
{
    /* Loop through str1 and check if first letter of str2 matches a letter in str1.
       if first letter found check rest with a nested loop */
    int i, place = 0;              // place will give us the position
    int count = 0;                 // count will be check against length of str2 
    for(i=0; i<strlen(str1); i++)
    {
        if(str2[0] == str1[i])
        {
            place = i;
            int j;
            for(j=i; j<strlen(str2)+i; j++)
            {
                if(str2[count] == str1[j])
                {
                    count++;
                }
            }
        }
     }
     if(count == strlen(str2)) // if count = str2 length we have a match
    {  
         return place;   // return position to main
     } else {
         return 0;       // if count doesnt = str2 we dont have match
     }
}

int main(int argc, char **argv)
{
    int place;
    place = findString("a chatter box", "hat");
    if(place != 0)
    {
        printf("Possition is %i\n",place);
    } else {
        printf("String 2 was not found in string 1\n");
    }
	
	return 0;
}
