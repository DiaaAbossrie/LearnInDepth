/*
* Author: Diaa Abossrie
* Title: Product of Two Numbers Program
*
* Description:
* This C program prompts the user to enter two numbers,
* reads the inputs, calculates their product, and then displays the result.
*/

#include <stdio.h>

int main(void) {
    // Declare float variables x, y and product
    float x, y, product;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");

    // Flush the standard output to ensure the prompt is displayed
    fflush(stdout);

    // Read the user inputs and store them in variables x and y
    scanf("%f %f", &x, &y);

    // Calculate the product of the entered numbers
    product = x * y;

    // Display the product
    printf("Product: %0.2f", product);

    // Return 0 to indicate successful execution
    return 0;
}

