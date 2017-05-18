#include <stdio.h>

struct list {
    int data;
    struct list * next;
};

int main(int argc, char **argv)
{
    struct list a, b, c;
    a.data = 1;
    a.next = &b;
    b.data = 2;
    b.next = &c;
    c.data = 3;
    c.next = NULL;
    
	printf("a data = %d\n",a.data);
	return 0;
}
