#include <stdio.h>
#include <string.h> // for string functions

/*string functions
 * assingmnet: strcpy()  
 * concatenation: strcat() 
 * comparison: strcmp()
 * length: strlen()
 */
 
 // remember an array name is a pointer to array[0]
#define MAXLENGTH 100

int main(int argc, char **argv)
{
	// last charetor is \0 pages 10-12
	char name[10] = "Ann"; // 5 cells one empty
	char name2[] = "Ann"; // 4 sell used
	
	//print dont nee loop
	printf("%s\n",name);
	printf("%c%c%c\n",name[0],name[1],name[2]);
	name[0] = 'B';
	printf("%s\n",name);
	printf("%c%c%c\n",name[0],name[1],name[2]);
	printf("%x %x %x %x\n",name[0],name[1],name[2],name[3]); // %x prints hex adecimal numbers
	
	// using pointer cant change "Ann"
	char *name3 = "Ann"; // cannot chnage this now. It is a constant.
	
	//using strcpy()  
	//destination string must have enough space or else it will orvide ride other memory
	char string1[MAXLENGTH];
	char string2[MAXLENGTH];
	strcpy(string1, "Hello World!");
	strcpy(string2, string1);
	printf("%s\n",string2);
 
	//concatenation
	/*strcat(name, "Sername");
	printf("%s\n",name);
	 */
	 
	 // pass strings to functions as pointers or arrays
	 
	return 0;
}
