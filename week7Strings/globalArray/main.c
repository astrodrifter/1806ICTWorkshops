#include <stdio.h>

int *myArray;
size_t array_size;

int main(int argc, char **argv)
{
	/* inside main(): */
	array_size = 3;
	array = malloc( sizeof(int)*array_size);
	if ( array == NULL) {
    /* exit - memory allocation failed. */
	}
	/* do stuff with array */
	free(array);
	return 0;
}
