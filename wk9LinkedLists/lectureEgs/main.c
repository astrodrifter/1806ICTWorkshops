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

void insertTail(NODE *newNode) {
    NODE *ptr = head;
    if(ptr == NULL) { // empty list
        head = newNode;
    } else {
        while (ptr->next != NULL) { //traverse list to the end
            ptr = ptr->next;
        } 
        ptr->next = newNode;
    }
}


void insertNode(NODE *newNode) {
    NODE *ptr = head;
    NODE *prevNode = NULL;
    if (ptr == NULL)  // new node inserted into empty list
    {
        head = newNode; 
        return;
    } 
    // find the first node with higher value than new node 
    while ( (ptr != NULL) && (ptr->data < newNode->data)) 
    {
        prevNode = ptr;
        ptr = ptr->next;
    }

    if (prevNode == NULL) // new node has smallest value, insert at head
    {
          newNode->next = head;
          head = newNode;
    } else if (ptr == NULL) {    // new node has biggest value, insert at tail 
        prevNode->next = newNode;
    } else {
        prevNode->next = newNode; 
        newNode->next = ptr;
    }
}

void deleteNode(int val)
{
    NODE *ptr = head;
    NODE *temp = NULL; 
    NODE *prevNode = NULL;
    if (ptr == NULL) {// if empty list, do nothing 
        return;
    } else if (ptr->data == val) {       // head is the node to delete
        temp = ptr->next;
        free(ptr);
        head = temp;

    } else {// search for node to delete 
        while ((ptr != NULL) && (ptr->data != val)) 
        {
            prevNode = ptr;
            ptr = ptr->next;
        }
        // link prev node to next node 
        if (ptr != NULL) 
        {
            prevNode->next = ptr->next;
            free(ptr);
        }
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

NODE * findNode(int val)
{
    NODE *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == val) 
            return ptr;
        else
            ptr = ptr->next;
    }
return ptr;
}

void destroyList()
{
    NODE *ptr = head;
    NODE *nextNode = NULL;
    while (ptr != NULL) 
    {
        nextNode = ptr->next;
        free(ptr);
        ptr = nextNode;
    }
    head = NULL;
}

int main(int argc, char **argv) {
    
    /* pointer to HEAD */
    NODE *ptr = NULL;
    
    ptr = createNode(3);
    insertHead(ptr);
    printf("Inserting 3 at head:\t\t");
    printList();
    
    ptr = createNode(4);
    insertHead(ptr);
    printf("Inserting 4 at head:\t\t");
    printList();
    
	return 0;
}
