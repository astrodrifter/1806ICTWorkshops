/* An implementation of type stack */
#include <stdio.h>
#define MAXLEN 1000
#define EMPTY -1
#define FULL (MAXLEN-1)
typedef struct Stack
{
    char s[MAXLEN];
    int top;
} stack;
    void reset( stack *ptr )
{
    ptr->top = EMPTY;
}
void push( stack *ptr, char c )
{
    (ptr->top)++;
    ptr->s[ptr->top] = c;
}

char pop( stack *ptr )
{
    char c = ptr->s[ptr->top];
    (ptr->top)--;
    return c;
}
char top( const stack *ptr )
{
    char c = ptr->s[ptr->top];
    return c;
}
int empty( const stack *ptr )
{
    return (ptr->top == EMPTY);
}
int full( const stack *ptr )
{
    return (ptr->top == FULL);
} 

/* Test the stack implementation by reversing a string */
int main()
{
    char str[] = "Programming Fundamentals 1806ICT";
    int i;
    stack s;
    reset(&s); // initialise the stack
    // print original string
    printf("Original string = %s\n", str);
    // push the characters in the string onto the stack
    for (i=0; str[i] != '\0'; i++)
    {
        if (!full(&s))
            push(&s, str[i]);
    }
    // print the string from the stack
    printf("From the stack = ");
    while (!empty(&s))
        printf("%c", pop(&s));
        
    
    printf("\n");
    return 0;
}