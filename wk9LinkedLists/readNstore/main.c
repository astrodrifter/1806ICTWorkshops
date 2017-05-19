#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100

/* Store student data in nodes read from file */

//create struct
struct Node {
    char[] firstName;
    char[] lastName;
    long int studentID;
}; typedef struct Node NODE;

//read file
//create node
NODE * createNode(char[] fName, char[] lName, long int sID) {
    
    //alocate memory for new node
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    if (ptr == NULL) {
        printf("Fail to create new node\n");
        exit(1);
    } else {
        strcpy(ptr->firstName,fName);
        strcpy(ptr->lastName,lName);
        ptr->studentID = sID;
        ptr->next = NULL;
    }
    
    return ptr;
}
//send data to node

int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
