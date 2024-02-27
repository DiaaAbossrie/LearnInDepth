/*
* Author: Diaa Abossrie
* Title: Factorial Calculation Program
*
* Description:
* This C program prompts the user to enter a positive integer,
* reads the input, calculates the factorial of the entered integer,
* and then displays the result.
*/

#include <stdio.h>

int main(void) {
    /* Declare character variable i_counter for loop control, integer variable x for user input, and
     * unsigned long long variable factorial to store the factorial value
     */
    char i_counter;
    int x;
    unsigned long long factorial = 1;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    fflush(stdout);

    // Read the user input and store it in the variable x
    scanf("%d", &x);

    // Check for special cases (0, 1, or negative input)
    if (x == 0 || x == 1) {
        printf("Factorial = 1");
    } else if (x < 0) {
        printf("Error!!! Factorial of a negative number doesn't exist.");
    } else {
        // Calculate the factorial using a loop
        for (i_counter = 2; i_counter <= x; i_counter++) {
            factorial *= (unsigned long long)i_counter;
        }
        // Display the factorial
        printf("Factorial = %llu", factorial);
    }

    // Return 0 to indicate successful execution
    return 0;
}

