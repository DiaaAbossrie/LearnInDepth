/*
* Author: Diaa Abossrie
* Title: Check Vowel or Consonant Program
*
* Description:
* This C program prompts the user to enter an alphabet,
* checks whether the input is a valid alphabet character,
* and then determines whether it is a vowel or a consonant.
*/

#include <stdio.h>

int main(void) {
    // Declare character variables x for user input and check for loop control
    char x, check = 0;

    // Loop until a valid alphabet character is entered
    while (!check) {
        printf("Enter an alphabet: ");
        fflush(stdout);

        // Read the user input and store it in the variable x
        scanf(" %c", &x);

        // Check if the input is a valid alphabet character
        if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
            check = 1; // Set check to 1 to exit the loop
        } else {
            printf("Wrong input!\n\n");
            fflush(stdout);
        }
    }

    // Switch statement to determine whether the entered character is a vowel or consonant
    switch (x) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.", x);
            break;
        default:
            printf("%c is a consonant.", x);
    }

    // Return 0 to indicate successful execution
    return 0;
}

