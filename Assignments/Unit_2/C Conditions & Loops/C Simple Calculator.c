/*
* Author: Diaa Abossrie
* Title: Simple Calculator Program
*
* Description:
* This C program prompts the user to enter two numbers and an operator (+, -, *, /),
* reads the inputs, performs the specified operation, and then displays the result.
*/

#include <stdio.h>

int main(void) {
    // Declare character variable operator for the operation, and float variables num1 and num2 for numbers
    char operator;
    float num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    fflush(stdout);

    // Read the user inputs and store them in the variables num1 and num2
    scanf("%f%f", &num1, &num2);

    // Prompt the user to enter an operator
    printf("Enter an operator either + or - or * or / : ");
    fflush(stdout);

    // Read the user input and store it in the variable operator
    scanf(" %c", &operator);

    // Perform the specified operation based on the operator
    switch (operator) {
        case '+':
            printf("%0.2f %c %0.2f = %0.2f", num1, operator, num2, num1 + num2);
            break;
        case '-':
            printf("%0.2f %c %0.2f = %0.2f", num1, operator, num2, num1 - num2);
            break;
        case '*':
            printf("%0.2f %c %0.2f = %0.2f", num1, operator, num2, num1 * num2);
            break;
        case '/':
            // Check if the second number is not zero to avoid division by zero
            if (num2 != 0) {
                printf("%0.2f %c %0.2f = %0.2f", num1, operator, num2, num1 / num2);
            } else {
                printf("Error!!! Division by zero is not allowed.");
            }
            break;
        default:
            printf("Wrong operator!");
    }

    // Return 0 to indicate successful execution
    return 0;
}

