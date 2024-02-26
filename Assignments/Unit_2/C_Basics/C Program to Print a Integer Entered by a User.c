/*
* Author: Diaa Abossrie
* Title: Integer Input Program
*
* Description:
* This C program prompts the user to enter an integer,
* reads the input, and then displays the entered integer.
*/

#include <stdio.h>

int main(void) {
    // Declare an integer variable x
    int x;

    // Prompt the user to enter an integer
    printf("Enter an Integer: ");
    
    // Flush the standard output to ensure the prompt is displayed
    fflush(stdout);

    // Read the user input and store it in the variable x
    scanf("%d", &x);

    // Display the entered integer
    printf("You Entered: %d", x);

    // Return 0 to indicate successful execution
    return 0;
}
