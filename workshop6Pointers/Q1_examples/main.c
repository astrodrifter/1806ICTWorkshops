/*1. Write a C program that performs each of the following tasks:
(a) Declare and initialise next to be a character variable with the value 'B'.
(b) Declare and initialise current to be a character variable with the value 'y'.
(c) Declare ptr to be a pointer to objects of type char.
(d) Assign the address of current to the variable ptr.
(e) Change the value of the object pointed to by ptr to '0'.
(f) Assign the address of next to the variable ptr.
(g) Change the value of the object pointed to by ptr to 'd'.
(h) Print the address stored in ptr.
(i) What values are stored in next and current? 
 * 
 * Dhruva O'Shea 17/04/17
 * 
 * */
 
#include <stdio.h>

int main(int argc, char **argv)
{
	// (a), (b), (c)
	char next = 'B', current = 'y', *ptr = NULL;
	
	// (d)
	ptr = &current;
	
	// (e)
	*ptr = '0';
	
	// (f)
	ptr = &next;
	
	// (g)
	*ptr = 'd';
	
	// (h)
	printf("%i\n",ptr);
	
	// (i) current = '0' = 48 and next = 'd' = 100;
	printf("current = %i, next = %i\n",current, next);
	
	return 0;
}
