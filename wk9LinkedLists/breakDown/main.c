#include <stdio.h>
#include <stdlib.h>

// will use int as data in this example
struct Node {
    int data;
    struct Node *next;
}; typedef struct Node NODE;

NODE *head = NULL;

NODE * createNode(int val) {
    
    //alocate memory for new node
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    if (ptr == NULL) {
        printf("Fail to create new node\n");
        exit(1);
    } else {
        ptr->data = val;
        ptr->next = NULL;
    }
    
    return ptr;
}

void insertHead(NODE *newNode) {
    
    NODE *ptr = head;
    if (ptr == NULL) { // empty list
        head = newNode;
    } else {
        newNode ->next = head;
        head = newNode;
    }
}

void printList() {
     NODE *ptr = head;
     while (ptr != NULL)
     {
        printf("%d ", ptr->data);
        ptr = ptr->next; 
    }
        printf("\n");
}

int main(int argc, char **argv)
{
    NODE *ptr = NULL;

    ptr = createNode(1);
    insertHead(ptr);
    printf("Inserting 1 at head:\t\t");
    printList();

	return 0;
}
