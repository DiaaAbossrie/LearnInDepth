/*
* Author: Diaa Abossrie
* Title: Sum of Two Integers Program
*
* Description:
* This C program prompts the user to enter two integers,
* reads the inputs, calculates their sum, and then displays the result.
*/

#include <stdio.h>

int main(void) {
    // Declare integer variables x, y and sum
    int x, y, sum;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");

    // Flush the standard output to ensure the prompt is displayed
    fflush(stdout);

    // Read the user inputs and store them in variables x and y
    scanf("%d %d", &x, &y);

    // Calculate the sum of the entered integers
    sum = x + y;

    // Display the sum
    printf("Sum: %d", sum);

    // Return 0 to indicate successful execution
    return 0;
}

