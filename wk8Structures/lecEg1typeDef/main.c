#include <stdio.h>
#define MAXLEN 50
struct StudentRec
{
    char lastname[MAXLEN];
    float mark;
};

typedef struct StudentRec Student; // using typedef to simplify 

int main()
{
    Student studA;
    Student studB;
    printf("Enter last name and mark for student A: ");
    scanf("%s %f", studA.lastname, &(studA.mark));
    printf("Enter last name and mark for student B: ");
    scanf("%s %f", studB.lastname, &(studB.mark));
    printf("Student A: %s\t%f\n", studA.lastname, studA.mark);
    printf("Student B: %s\t%f\n", studB.lastname, studB.mark);
    return 0;
}