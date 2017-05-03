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

struct Student
{
    char firstName[MAXLEN];
    char lastName[MAXLEN];
    long int id;
    float markEnglish;
    float markMath;
    float markPhysics;
    
};
typedef struct Student studentEntry;
studentEntry readInData(void)
{
    studentEntry newStudent;
    printf("Enter student first and last name:\n");
    scanf("%s %s",newStudent.firstName, newStudent.lastName);
    printf("Enter student ID:\n");
    scanf("%ld",&(newStudent.id));
    printf("Enter mark for English:\n");
    scanf("%f",&(newStudent.markEnglish));
    printf("Enter mark for Maths:\n");
    scanf("%f",&(newStudent.markMath));
    printf("Enter mark for Physics:\n");
    scanf("%f",&(newStudent.markPhysics));
    return newStudent;
}
void printStudent(studentEntry item)
{
    printf("\nStudent name: %s %s\n\n", item.firstName, item.lastName);
    printf("Student ID: %ld\n\n", item.id);
    //char gradeEnglish;
    printf("English grade: %c\n\n", getGrade(item.markEnglish));
    printf("Mathematics grade: %c\n\n", getGrade(item.markMath));
    printf("Physics grade: %c\n\n", getGrade(item.markPhysics));
}
char getGrade(float mark)
{
    char grade;
    if(90 <= mark  && mark <= 100)
    {
        grade = 'A';
    } else if(80 <= mark && mark < 90) {
        grade = 'B';
    } else if(70 <= mark && mark < 80) {
        grade = 'C';
    } else if(60 <= mark && mark < 70) {
        grade = 'D';
    } else if(50 <= mark && mark < 60) {
        grade = 'E';
    } else if(mark < 50) {
        grade = 'F';
    }
    return grade;
   
}

int main(int argc, char **argv)
{
    printf("\n\nProgram starts.....\n\n");
    studentEntry newStudent;
    newStudent = readInData();
    printStudent(newStudent);
    printf("\nProgram finished.....\n\n");

	return 0;
}
