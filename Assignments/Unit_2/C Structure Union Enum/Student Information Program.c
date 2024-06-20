/*
* Author: Diaa Abossrie
* Title: Student Information Program
*
* Description:
* This C program uses a structure to store and display information about a student.
* It prompts the user to input the student's name, roll number, and marks, and then displays the entered information.
*/

#include <stdio.h>

// Define a structure to hold student information
typedef struct {
    unsigned char name[20]; // Array to hold the student's name
    unsigned int roll;      // Variable to hold the student's roll number
    float mark;             // Variable to hold the student's marks
} Student;

int main(void) {
    // Declare a variable of type Student
    Student first_student;

    // Prompt the user to enter the student's name
    printf("Enter Information of students:\n\nEnter name: ");
    fflush(stdout);
    gets(first_student.name);

    // Prompt the user to enter the student's roll number
    printf("Enter roll number: ");
    fflush(stdout);
    scanf("%d", &first_student.roll);

    // Prompt the user to enter the student's marks
    printf("Enter marks: ");
    fflush(stdout);
    scanf("%f", &first_student.mark);

    // Display the entered information
    printf("\nDisplaying Information\nName: %s\nRoll: %d\nMarks: %0.2f", first_student.name, first_student.roll, first_student.mark);
    fflush(stdout);

    return 0;
}
