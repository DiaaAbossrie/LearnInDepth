/*
* Author: Diaa Abossrie
* Title: Character Frequency in String Program
*
* Description:
* This C program prompts the user to enter a string and a character,
* reads the inputs, counts the frequency of the specified character in the string,
* and then prints the result.
*/

#include <stdio.h>
#define SIZE 100

int main(void) {
    char str[SIZE], character;
    int i, freq = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fflush(stdout);
    fgets(str, SIZE, stdin);

    // Prompt the user to enter a character to find its frequency
    printf("Enter a character to find its frequency: ");
    fflush(stdout);
    scanf(" %c", &character);

    // Iterate through the string to count the frequency of the specified character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == character) {
            freq++;
        }
    }

    // Print the frequency of the character
    printf("Frequency of %c: %d", character, freq);

    return 0;
}

