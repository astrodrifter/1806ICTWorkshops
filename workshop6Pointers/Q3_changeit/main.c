/*3. In the following program, the invocation of changeIt() seems to have no effect.
Can you explain why? 
 * 
 * Dhruva O'Shea 19/04/17
 * 
 * Solution - by printing different locations I found that it's because changIt
 * is a void function.
 * 
 * */



#include <stdio.h>
void changeIt(int array[])
{
	int i = 888;
	int *ptr = &i;
	array = ptr; // array is assigned a different value
	printf("ptr = %i\n",ptr);
	int *arrayPtr = array;
	printf("arrayPtr has the value %p\n", arrayPtr);
}
int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	int *arrayPtr;
	arrayPtr = array;
	printf("arrayPtr has the value %p\n", arrayPtr);
	changeIt(array);
	arrayPtr = array;
	printf("arrayPtr has the value %p\n", arrayPtr);
	
	for(int i = 0; i < 5; i++)
	{
		printf("%i ",array[i]);
	}
	printf("\n");
	return 0;
} 