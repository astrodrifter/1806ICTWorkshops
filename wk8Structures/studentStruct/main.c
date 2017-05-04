/*2. Write a program that uses a structure to store the following 
     details about a student’s records:
      
    a. First name (a string)
    b. Last name (a string)
    c. Student ID (a long int)
    d. Marks for English (a float)
    e. Marks for Mathematics (a float)
    f. Marks for Physics (a float)
     
    Your program should use a function to read in the data for 
    a student, and a function to print out the student’s records, 
    with the marks replaced by the corresponding grade shown below:
*/

#include <stdio.h>
#define MAXLEN 100
struct name
{
    char firstName[MAXLEN];
    char lastName[MAXLEN];
};
struct record
{
    struct name studentName;
    long int studentID;
    float engMark;
    float mathMark;
    float phyMark;
    char engGrade;
    char mathGrade;
    char phyGrade;
};
typedef struct record Record;
void readRecord(Record *ptr)
{
    printf("Enter first name, last name, studentID, and marks for eng, math, phys\n");
    scanf("%s", ptr->studentName.firstName);
    scanf("%s", ptr->studentName.lastName);
    scanf("%ld", &(ptr->studentID));
    scanf("%f", &(ptr->engMark));
    scanf("%f", &(ptr->mathMark));
    scanf("%f", &(ptr->phyMark));
}
char grade(float mark)
{
    if (mark>=90.0 && mark<=100.0)
        return 'A';
    else if (mark >= 80.0)
        return 'B';
    else if (mark >= 70.0)
        return 'C';
    else if (mark >= 60.0)
        return 'D';
    else if (mark >= 50.0)
        return 'E';
    else
        return 'F';
    }
void determineGrade(Record *ptr)
{
    ptr->engGrade = grade(ptr->engMark);
    ptr->mathGrade = grade(ptr->mathMark);
    ptr->phyGrade = grade(ptr->phyMark);
}
void printRecord(Record *ptr)
{
    printf("Name:\t\t%s %s\n", ptr->studentName.firstName, 
    ptr->studentName.lastName);

    printf("Student ID:\t%ld\n", ptr->studentID);
    printf("English:\t%c\n", ptr->engGrade);
    printf("Mathematics:\t%c\n", ptr->mathGrade);
    printf("Physics:\t%c\n", ptr->phyGrade);
}
int main(int argc, char **argv)
{
    Record studentRecord;
    readRecord(&studentRecord);
    // determine the corresponding grade
    determineGrade(&studentRecord);
    printRecord(&studentRecord);
    return 0;
}