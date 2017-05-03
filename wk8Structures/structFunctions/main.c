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
Student readRecord ( void )
{
    Student newStudent;
    printf("Enter last name and mark: ");
    scanf("%s %f", newStudent.lastname, &(newStudent.mark));
    return newStudent;
}
void printRecord ( Student item )
{
    printf("Last name: %s\n", item.lastname);
    printf(" Mark: %.1f\n\n", item.mark);
}

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
        class[i] = readRecord();
    }
    printf("\nClass list:\n\n");
    for (i=0; i < count; i++)
    {
        printRecord(class[i]);
    }
    return 0;
}