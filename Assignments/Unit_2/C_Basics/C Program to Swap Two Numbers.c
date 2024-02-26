/*
* Author: Diaa Abossrie
* Title: Swap Two Integers Program
*
* Description:
* This C program prompts the user to enter two integers (a and b),
* reads the inputs, swaps the values of a and b, and then displays the swapped values.
*/

#include <stdio.h>

int main(void) {
    // Declare integer variables x, y, and temp
    int x, y, temp;

    // Prompt the user to enter the value of a
    printf("Enter value of a: ");
    
    // Flush the standard output to ensure the prompt is displayed
    fflush(stdout);

    // Read the user input and store it in the variable x
    scanf("%d", &x);

    // Prompt the user to enter the value of b
    printf("Enter value of b: ");
    
    // Flush the standard output to ensure the prompt is displayed
    fflush(stdout);

    // Read the user input and store it in the variable y
    scanf("%d", &y);

    // Swap the values of x and y using a temporary variable temp
    temp = x;
    x = y;
    y = temp;

    // Display the values after swapping
    printf("After swapping, value of a: %d\nAfter swapping, value of b: %d", x, y);

    // Return 0 to indicate successful execution
    return 0;
}

