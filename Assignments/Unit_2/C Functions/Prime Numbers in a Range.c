/*
* Author: Diaa Abossrie
* Title: Prime Numbers in a Range
*
* Description:
* This C program takes two numbers as input, representing an interval, and prints the prime numbers within that range.
* It defines two functions: isPrime to check whether a given number is prime or not, and printPrimeNumbers to
* iterate through the range and print the prime numbers.
*/

#include <stdio.h>

// Function prototype for checking if a number is prime
char isPrime(const int* x);

// Function prototype for printing prime numbers in a given range
void printPrimeNumbers(const int* x, const int* y);

int main(void) {
    int num1, num2;

    // Get user input for two numbers (intervals)
    printf("Enter two numbers (intervals): ");
    fflush(stdout);
    scanf("%d%d", &num1, &num2);

    // Print prime numbers within the given range
    printPrimeNumbers(&num1, &num2);

    return 0;
}

// Function definition for checking if a number is prime
char isPrime(const int* x) {
    int i;

    // 1 is not a prime number
    if (*x == 1) {
        return 0;
    }

    // Check for divisibility up to the square root of x
    for (i = 2; i * i <= *x; i++) {
        if (!((*x) % i)) {
            return 0;
        }
    }

    // If no divisor is found, the number is prime
    return 1;
}

// Function definition for printing prime numbers in a given range
void printPrimeNumbers(const int* x, const int* y) {
    int i;

    // Iterate through the range from x to y
    for (i = *x; i <= *y; i++) {
        // If the current number is prime, print it
        if (isPrime(&i)) {
            printf("%d ", i);
        }
    }
}

