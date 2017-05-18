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
    printf("b data = %d\n",b.data);
    printf("c data = %d\n",c.data);
    
    struct list d;
    d.data = 4;
    d.next = NULL;
    
    printf("d data = %d\n",d.data);
    
	return 0;
}
