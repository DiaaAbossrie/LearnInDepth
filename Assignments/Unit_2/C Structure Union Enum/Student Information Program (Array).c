/*
* Author: Diaa Abossrie
* Title: Student Information Program (Array)
*
* Description:
* This C program defines a structure to store student information including name, roll number, and marks.
* It creates an array of structures to hold information for 10 students.
* The program collects the data from the user and then displays the information.
*/

#include <stdio.h>

// Define a structure to hold student information
typedef struct {
    char name[50];  // Variable to hold the student's name
    int roll;       // Variable to hold the student's roll number
    float marks;    // Variable to hold the student's marks
} Student;

int main(void) {
    Student students[10]; // Array to hold information for 10 students
    int i;

    // Prompt the user to enter information for each student
    printf("Enter information of students:\n");
    for (i = 0; i < 10; i++) {
        printf("\nFor roll number %d:\n", i + 1);

        // Get the student's name
        printf("Enter name: ");
        fflush(stdout);
        scanf("%s", students[i].name);

        // Get the student's marks
        printf("Enter marks: ");
        fflush(stdout);
        scanf("%f", &students[i].marks);

        // Set the student's roll number
        students[i].roll = i + 1;
    }

    // Display the information of all students
    printf("\nDisplaying information of students:\n");
    for (i = 0; i < 10; i++) {
        printf("\nInformation for roll number %d:\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

