/*
* Author: Diaa Abossrie
* Title: Check Even or Odd Program
*
* Description:
* This C program prompts the user to enter an integer,
* reads the input, checks whether it is even or odd using the modulo operator,
* and then displays the result.
*/

#include <stdio.h>

int main(void) {
    // Declare an integer variable x
    int x;

    // Prompt the user to enter an integer
    printf("Enter an integer you want to check: ");

    // Flush the standard output to ensure the prompt is displayed
    fflush(stdout);

    // Read the user input and store it in the variable x
    scanf("%d", &x);

    // Check whether x is even or odd using the modulo operator
    x % 2 == 0 ? printf("%d is even", x) : printf("%d is odd", x);

    // Return 0 to indicate successful execution
    return 0;
}

