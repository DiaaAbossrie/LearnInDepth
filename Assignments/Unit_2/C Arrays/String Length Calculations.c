/*
* Author: Diaa Abossrie
* Title: String Length Calculation Program
*
* Description:
* This C program prompts the user to enter a string,
* reads the input using fgets, calculates the length of the string,
* and then prints the result.
*/

#include <stdio.h>
#define SIZE 100

int main(void) {
    char str[SIZE];
    int i, length = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fflush(stdout);
    fgets(str, SIZE, stdin);

    // Calculate the length of the string (excluding the newline character)
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++);
    length = i;

    // Print the length of the string
    printf("Length of the string: %d", length);

    return 0;
}

