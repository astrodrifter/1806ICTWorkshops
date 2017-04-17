/*
 * 2. Given these declarations:
	int x=0;
	int y=0;
	int* myPtr=NULL;
	int* otherPtr=NULL;
Write a C program to determine the values of myPtr, otherPtr, x, and y, after each
of the following lines of code:
	(a) myPtr=&x;
	(b) otherPtr=&y;
	(c) *myPtr=4;
	(d) *otherPtr=*myPtr;
	(e) x=5;
	(f) otherPtr=myPtr;
	(g) *otherPtr=6; 
 * 
 * dHRUVA OSEAH 17/04/17
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	//given
	int x=0;
	int y=0;
	int* myPtr=NULL;
	int* otherPtr=NULL;
	
	//(a)
	myPtr = &x; // assigns the value of x to myPtr
	printf("After perfroming myPtr = &x;\n");
	printf("myPtr = %i, ",*myPtr);
	printf("x = %i, y = %i\n",x,y);
	//(b)
	otherPtr = &y;  // assigns the value of y to otherPtr
	printf("After perfroming otherPtr = &y;\n");
	printf("myPtr = %i, otherPtr = %i, ",*myPtr, *otherPtr);
	printf("x = %i, y = %i\n",x,y);
	
	//(c) 
	*myPtr = 4; // changes x to 4
	printf("After perfroming *myPtr = 4;\n");
	printf("myPtr = %i, otherPtr = %i, ",*myPtr, *otherPtr);
	printf("x = %i, y = %i\n",x,y);
	
	//(d) 
	*otherPtr = *myPtr; //chnages y to 4
	printf("After perfroming *otherPtr = *myPtr;\n");
	printf("myPtr = %i, otherPtr = %i, ",*myPtr, *otherPtr);
	printf("x = %i, y = %i\n",x,y);
	
	//(e) 
	x = 5; // changes x to = 5
	printf("After perfroming x = 5;\n");
	printf("myPtr = %i, otherPtr = %i, ",*myPtr, *otherPtr);
	printf("x = %i, y = %i\n",x,y);
	
	//(f) 
	otherPtr = myPtr; // makes both values pointed to equal
	printf("After perfroming otherPtr = myPtr;\n");
	printf("myPtr = %i, otherPtr = %i, ",*myPtr, *otherPtr);
	printf("x = %i, y = %i\n",x,y);
	
	//(g) 
	*otherPtr = 6;  //x, otherPtr and myPtr chnage to 6. I dont know how myPtr changes
	printf("After perfroming *otherPtr = 6\n"); 
	printf("myPtr = %i, otherPtr = %i, ",*myPtr, *otherPtr);
	printf("x = %i, y = %i\n",x,y);
	
	return 0;
}
