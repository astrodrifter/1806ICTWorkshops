#include <stdio.h>
#include <string.h>

#define NAMELEN 50 // alowes for 50 chaactors of user name

/* Print a simple greeting to the user */

/* greet will concatenate a response to user name */
void greet(char * name)
{
	strcat(name, "! How are ya?");
}

/* Program starts here */
int main(int argc, char **argv)
{
	char user[NAMELEN]; // creates an array for a srting of chars
	
	printf("Who are you? ");
	scanf("%s", user); // gets user name input. dont need % because it's an address
	greet(user);  // send user to greet function for concatenation
	printf("%s\n", user); // user has now been concatenated 
	
	return 0; //game over
}
