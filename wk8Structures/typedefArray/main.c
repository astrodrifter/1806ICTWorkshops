#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 50
#define MAXN 20
struct StudentRec
{
    char lastname[MAXLEN];
    float mark;
};

typedef struct StudentRec Student;

int main()
    {
    int count = 0;
    Student class[MAXN];
    int i;
    printf("How many students? ");
    scanf("%d", &count); 
    if (count > MAXN)
    {
        printf("Not enough space.\n");
        exit(1);
    }
    for (i=0; i < count; i++)
    {
        printf("Enter last name and mark: ");
        scanf("%s %f", class[i].lastname, &(class[i].mark) );
    }
    printf("\nClass list:\n\n");
    for (i=0; i < count; i++)
    {
        printf("Last name: %s\n", class[i].lastname);
        printf(" Mark: %.1f\n\n", class[i].mark);
    }
    return 0;
}