#include <stdio.h>

int main(int argc, char **argv)
{
	// last charetor is \0 pages 10-12
	char name[5] = "Ann"; // 5 cells one empty
	char name2[] = "Ann"; // 4 sell used
	
	//print dont nee loop
	printf("%s\n",name);
	printf("%c%c%c\n",name[0],name[1],name[2]);
	name[0] = 'B';
	printf("%s\n",name);
	printf("%c%c%c\n",name[0],name[1],name[2]);
	
	char *name = "Ann"; // cannot chnage this now. It is a constant.
	return 0;
}
