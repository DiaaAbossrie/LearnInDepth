/*
* Author: Diaa Abossrie
* Title: Power Calculation Program
*
* Description:
* This C program calculates the power of a given base number raised to a specified exponent using recursion.
* It prompts the user to input the base and exponent, performs the power calculation, and displays the result.
*/

#include <stdio.h>

// Function prototype for calculating power using recursion
unsigned long long calculatePower(unsigned int, unsigned char);

int main(void) {
    unsigned int num;
    unsigned char pow;

    // Get user input for the base number
    printf("Enter the base number: ");
    fflush(stdout);
    scanf("%u", &num);

    // Get user input for the power number
    printf("Enter the power number: ");
    fflush(stdout);
    scanf("%hhu", &pow);

    // Display the result of the power calculation
    printf("%u^%u = %llu", num, pow, calculatePower(num, pow));

    return 0;
}

// Function definition for calculating power using recursion
unsigned long long calculatePower(unsigned int num, unsigned char pow) {
    // Base case: If the power is not zero, recursively calculate power
    if (pow != 0) {
        return (num * calculatePower(num, pow - 1));
    }
    // Base case: If the power is zero, return 1
    return 1;
}

