/*
* Author: Diaa Abossrie
* Title: Check Positive, Negative, or Zero Program
*
* Description:
* This C program prompts the user to enter a number,
* reads the input, checks whether it is positive, negative, or zero,
* and then displays the result.
*/

#include <stdio.h>

int main(void) {
    // Declare a float variable x for user input
    float x;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    fflush(stdout);

    // Read the user input and store it in the variable x
    scanf("%f", &x);

    // Check whether x is positive, negative, or zero
    if (x > 0) {
        printf("%0.2f is positive", x);
    } else if (x < 0) {
        printf("%0.2f is negative", x);
    } else {
        printf("You entered zero.");
    }

    // Return 0 to indicate successful execution
    return 0;
}

