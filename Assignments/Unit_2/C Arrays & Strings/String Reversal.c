/*
* Author: Diaa Abossrie
* Title: String Reversal Program
*
* Description:
* This C program prompts the user to enter a string,
* calculates the length of the string, reverses the string using XOR swapping,
* and then prints the reversed string.
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

    // Calculate the length of the string
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        length++;
    }

    // Reverse the string using XOR swapping
    for (i = 0; i < length / 2; i++) {
        str[i] ^= str[length - 1 - i];
        str[length - 1 - i] ^= str[i];
        str[i] ^= str[length - 1 - i];
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

