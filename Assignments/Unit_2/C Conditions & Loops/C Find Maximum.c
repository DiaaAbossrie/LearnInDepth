/*
* Author: Diaa Abossrie
* Title: Find the Largest Number Program
*
* Description:
* This C program prompts the user to enter three numbers,
* reads the inputs, compares them to find the largest number,
* and then displays the result.
*/

#include <stdio.h>

int main(void) {
    // Declare float variables x, y, z for user input and max to store the largest number
    float x, y, z, max;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    fflush(stdout);

    // Read the user inputs and store them in the variables x, y, and z
    scanf("%f%f%f", &x, &y, &z);

    // Assume the first number (x) is the largest
    max = x;

    // Compare y to the current max
    if (y > max)
        max = y;

    // Compare z to the current max
    if (z > max)
        max = z;

    // Display the largest number
    printf("The largest number = %0.2f", max);

    // Return 0 to indicate successful execution
    return 0;
}

