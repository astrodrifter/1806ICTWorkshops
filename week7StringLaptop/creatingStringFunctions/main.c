/* Assesment 4 Dhruva O'shea */

#include <stdio.h>
#define MAXLEN 200
/* prtoyptes  */

int myStringLen(char string[])
{
    int count = 0, i = 0;
    while(string[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

/* string compare */
int myStringCmp(char str1[], char str2[])
{
    int i, count = 0, len1, len2;
    len1 = myStringLen(str1);
    len2 = myStringLen(str2);
    
    for(i = 0; i < len1; i++)
    {
        if(str1[i] == str2[i])
        {
            count++;
        }
    }
    if(count == len1)
        return 0;
    else
        return 1;
}

char * myStringCat(char str1[], char str2[])
{
    
    int len1, len2, totalLen;
    len1 = myStringLen(str1);
    len2 = myStringLen(str2);
    totalLen = len1 + len2;
    int i,j = 0;
    for (i = len1; i <= totalLen; i++)
    {
        str1[i] = str2[j];
        j++;
    }
    printf("Str 3 = %s\n",str1);
    return str1;
    
}

int main(int argc, char **argv)
{
    /* string length */
	char str1[MAXLEN];
    printf("Enter a string:\n");
    scanf("%s",str1);
    
    int strLen;
    strLen = myStringLen(str1);
    printf("string length = %i\n",strLen);
    
    /* string compare */
    int same = 0;
    char str2 [MAXLEN];
    printf("Enter another string:\n");
    scanf("%s",str2);
    same = myStringCmp(str1, str2);
    if(same == 0)
        printf("Str1 %s and str2 %s are the same.\n", str1, str2);
    else
        printf("Str1 %s and str2 %s are different.\n", str1, str2);
    
    
    /* string concatenate */
    char str3[MAXLEN], *str3Ptr;
    str3Ptr = myStringCat(str1, str2);
    printf("You new string is %s.\n",str3Ptr);
	return 0;
}