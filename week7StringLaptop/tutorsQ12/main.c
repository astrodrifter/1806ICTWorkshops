#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 100

int findString (const char source[], const char s[]) {
   int i, j, foundIt = 0;
   // try each character in source
   for ( i = 0; source[i] != '\0' && !foundIt; ++i )
   {
        foundIt = 1;
        // now see if corresponding chars from s match
        for ( j = 0; s[j] != '\0' && foundIt; ++j )
        {
            if ( source[j + i] != s[j] || source[j + i] == '\0' ) foundIt = 0;
            }
                if (foundIt)
                return i;
    }
    return -1; 
}

void removeString(char source[], int pos, int len) 
{
    strcpy(source+pos, source+pos+len); 
}

void insertString (char source[], char s[], int i) {
    int j, lenS, lenSource;
    /* first, find out how big the two strings are */
    lenSource = strlen(source);
    lenS = strlen(s);
    /* Note that i == lenSource
    * effectively concatenates s onto the end of source */
    if (i > lenSource)
         return;
    /* now we have to move the characters in source
    * down from the insertion point to make room for s.
    * Note that we copy the string starting from the end
    * to avoid overwriting characters in source.
    * We also copy the terminating null (j starts at lenSource) * as well since the final result must be null-terminated */
    for ( j = lenSource; j >= i; --j )
         source [j + lenS] = source [j];
    /* we've made room, now copy s into source at the
    * insertion point */
    for ( j = 0; j < lenS; ++j )
         source [j + i] = s[j];
    }
    int replaceString (char source [], char s1[], char s2[]) {
    int index;
   // first locate s1 inside the source
   index = findString (source, s1);
   if ( index == -1 )
         return 0;
    // now delete s1 from the source removeString (source, index, strlen(s1));
   // now insert the new string
   insertString (source, s2, index);
    return 1; 
}

int main(int argc, char **argv)
{
    char temp[MAXLEN];
    char *string[3];
    int stillFound = 1;
    int i;
    // read in the three character strings
    for (i=0; i<3 && fgets(temp, sizeof(temp), stdin) != NULL; i++) 
    {
        temp[strlen(temp)-1] = '\0';
        // allocate memory for each string
        string[i] = calloc(strlen(temp)+1, sizeof(char)); 
        if (string[i] == NULL)
        {
            printf("calloc failed to allocate memory\n");
            return 1; 
        }
        // copy the string
        strcpy(string[i], temp);
    }
    printf("Before: %s\n", string[0]);
    // replacing all instances of string[1] in string[0] 
    while (stillFound)
    {
       stillFound = replaceString(string[0], string[1], string[2]);
        printf("After: %s\n", string[0]);
        for (i=0; i<3; i++)
        {
            free(string[i]);
        } 
    }
    
    return 0; 
}