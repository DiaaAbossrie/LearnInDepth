/*
* Author: Diaa Abossrie
* Title: Check if Character is Alphabet Program
*
* Description:
* This C program prompts the user to enter a character,
* reads the input, checks whether it is an alphabet character,
* and then displays the result.
*/

#include <stdio.h>

int main(void) {
    // Declare a character variable x for user input
    char x;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    fflush(stdout);

    // Read the user input and store it in the variable x
    scanf(" %c", &x);

    // Check whether x is an alphabet character
    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
        printf("%c is an alphabet.", x);
    } else {
        printf("%c is not an alphabet.", x);
    }

    // Return 0 to indicate successful execution
    return 0;
}

