/*
* Author: Diaa Abossrie
* Title: Sentence Reversal Program
*
* Description:
* This C program defines a function reverseSentence that recursively reverses a sentence in-place.
* It then demonstrates the usage of the function in the main function by taking user input for a sentence,
* calculating the length, and reversing the sentence.
*/

#include <stdio.h>

// Function prototype for reversing a sentence in-place using recursion
void reverseSentence(char *sentence, int start, int end);

int main(void) {
    char sentence[100];
    int length;

    // Get user input for the sentence
    printf("Enter a sentence to be reversed: ");
    fflush(stdout);

    // Use fgets for safe input
    fgets(sentence, sizeof(sentence), stdin);

    // Calculate the length of the input sentence
    for (length = 0; sentence[length] != '\0'; length++);

    // Reverse the sentence in-place
    reverseSentence(sentence, 0, length - 2); // Exclude the newline character

    // Display the reversed sentence
    printf("\nReversed sentence: %s\n", sentence);

    return 0;
}

// Function definition for reversing a sentence in-place using recursion
void reverseSentence(char *sentence, int start, int end) {
    // Base case: If start is greater than or equal to end, stop recursion
    if (start >= end) {
        return;
    }

    // Swap characters at the start and end positions
    char temp = sentence[start];
    sentence[start] = sentence[end];
    sentence[end] = temp;

    // Recursively reverse the rest of the sentence
    reverseSentence(sentence, start + 1, end - 1);
}

