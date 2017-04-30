/*
 * (A) find a string in a string

 * Dhruva O'Shea 30/04/17
 * 
*/

#include <stdio.h>
#include <string.h>

#define MAXLEN 100

int findString(char str1[], char str2[])
{
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    printf("str2 length = %i\n",strlen(str2));
    /* Loop through first letter to first letter
    * if first letter found check rest */
    int i, place = 0, count = 0;
    for(i=0; i<strlen(str1); i++)
    {
        if(str2[0] == str1[i])
        {
            place = i;
            printf("place  = %i\n",place);
            int j;
            for(j=i; j<strlen(str2)+i; j++)
            {
                printf("j = %i\n",j);
                if(str2[count] == str1[j])
                {
                    count++;
                    printf("count = %i\n",count);
                }
            }
        }
     }
     if(count == strlen(str2)){
         return place;
     } else {
         return 0;
     }
}

int main(int argc, char **argv)
{
    int place;
    place = findString("a chatter box", "hat");
    
	printf("Possition is %i\n",place);
	return 0;
}
