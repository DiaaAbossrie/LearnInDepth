/*
* Author: Diaa Abossrie
* Title: Factorial Calculator
*
* Description:
* This C program calculates the factorial of a positive integer using recursion.
* It defines a recursive function, calculateFactorial, to compute the factorial.
* The main function takes user input for a positive integer, calculates its factorial,
* and then prints the result.
*/

#include <stdio.h>

// Function prototype for calculating the factorial of a positive integer using recursion
long long calculateFactorial(unsigned int num);

int main(void) {
    unsigned int x;
    unsigned long long fact;

    // Get user input for a positive integer
    printf("Enter a positive integer: ");
    fflush(stdout);
    scanf("%u", &x);

    // Calculate the factorial of the input
    fact = calculateFactorial(x);

    // Print the result
    printf("Factorial of %u = %llu", x, fact);

    return 0;
}

// Function definition for calculating the factorial of a positive integer using recursion
long long calculateFactorial(unsigned int num) {
    // Base case: factorial of 0 or 1 is 1
    if ((num == 1) || (num == 0)) {
        return 1;
    } else {
        // Recursive case: multiply the current number by the factorial of (num-1)
        return num * calculateFactorial(num - 1);
    }
}

