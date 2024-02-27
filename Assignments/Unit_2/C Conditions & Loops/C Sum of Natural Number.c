/*
* Author: Diaa Abossrie
* Title: Sum of Natural Numbers Program
*
* Description:
* This C program prompts the user to enter an integer,
* reads the input, calculates the sum of natural numbers up to the entered integer,
* and then displays the result.
*/

#include <stdio.h>

int main(void) {
    // Declare unsigned integer variables x for user input, sum to store the sum, and i for loop control
    unsigned int x, sum = 0, i;

    // Prompt the user to enter an unsigned integer
    printf("Enter an integer: ");
    fflush(stdout);

    // Read the user input and store it in the variable x
    scanf("%u", &x);

    // Loop through natural numbers from 1 to x and calculate the sum
    for (i = 1; i <= x; i++) {
        sum += i;
    }

    // Display the sum
    printf("Sum = %u", sum);

    // Return 0 to indicate successful execution
    return 0;
}

