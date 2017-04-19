#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *words[5] = {NULL}; // an array of 5 pointers to char
		char temp[100]; // temp storage for a word to be read in
	for (int i=0; i<5; i++) {
		scanf("%s", temp);
		
		// need to allocate memory to store each string (or word)
		words[i] = calloc(strlen(temp)+1, sizeof(char));
		if (words[i] == NULL) {
			printf("Calloc failed to allocate memory\n");
			return 1;
		}
		strcpy(words[i], temp); // copy string
	}
	
	for (int i=0; i<5; i++) {
		printf("%s\n", words[i]);
		free(words[i]);
	}
	return 0;
}
