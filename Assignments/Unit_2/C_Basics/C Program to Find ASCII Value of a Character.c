/*
* Author: Diaa Abossrie
* Title: ASCII Value of Character Program
*
* Description:
* This C program prompts the user to enter a character,
* reads the input, and then displays the ASCII value of the entered character.
*/

#include <stdio.h>

int main(void) {
    // Declare a character variable x
    char x;

    // Prompt the user to enter a character
    printf("Enter a character: ");

    // Flush the standard output to ensure the prompt is displayed
    fflush(stdout);

    // Read the user input and store it in the variable x
    scanf("%c", &x);

    // Display the ASCII value of the entered character
    printf("The ASCII value of %c: %d", x, x);

    // Return 0 to indicate successful execution
    return 0;
}

