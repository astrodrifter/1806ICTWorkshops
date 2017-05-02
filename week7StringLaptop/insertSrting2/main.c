/* c) Write a function called insertString() to insert one character string into another string. 
 * The arguments to the function should consist of the source string, the string to be inserted, 
 * and the position in the source string where the string is to be inserted. *
 * 
 * Dhruva O'Shea 02/05/17
 * 
 */
#include <stdio.h>
#include <string.h>

#define MAXLEN 200

void insertString(char str1[], char str2[], int pos)
{
    /* get lengths of both strings */
    int lengthStr1,lengthStr2;
    lengthStr1 = strlen(str1);
    lengthStr2 = strlen(str2);
    
    
    /*
     * start from pos
     * copy from str1[pos] to string[pos+strlen(str2)] to indexes > str1[strlen(str1)]
     * enter str2 over indexes from str1[pos] to string[pos+strlen(str2)]
     */
    int i, j = 0;
    for(i = pos; i < lengthStr1 + lengthStr2; i++, j++)
    {
        str1[lengthStr1 + j] = str1[i];      //copy inside elements to outside original str1
        //str1[i] = str2[j];                     //copy str2 inside str1 
    }
}   

int main(int argc, char **argv)
{
    char str1 = "The wrong son";
    char str2 = "per";
    int pos = 10;
    insertString(str1, str2, pos);
    
	printf("New string = %s", str1);
	return 0;
}
