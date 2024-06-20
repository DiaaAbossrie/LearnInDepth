/*
* Author: Diaa Abossrie
* Title: Complex Number Addition Program
*
* Description:
* This C program defines a structure to represent complex numbers.
* It takes two complex numbers as input from the user, adds them together using a function, and displays the result.
*/

#include <stdio.h>

// Define a structure to hold complex number information
typedef struct {
    float real;       // Variable to hold the real part of the complex number
    float imag;       // Variable to hold the imaginary part of the complex number
} Complex;

// Function prototype to add two complex numbers
void addComplex(const Complex *c1, const Complex *c2, Complex *result);

int main(void) {
    Complex num1, num2, sum;

    // Prompt the user to enter the first complex number
    printf("For 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    fflush(stdout);
    scanf("%f %f", &num1.real, &num1.imag);

    // Prompt the user to enter the second complex number
    printf("For 2nd complex number\n");
    printf("Enter real and imaginary respectively: ");
    fflush(stdout);
    scanf("%f %f", &num2.real, &num2.imag);

    // Call the function to add the two complex numbers
    addComplex(&num1, &num2, &sum);

    // Display the sum of the complex numbers
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    fflush(stdout);

    return 0;
}

// Function to add two complex numbers
void addComplex(const Complex *c1, const Complex *c2, Complex *result) {
    result->real = c1->real + c2->real;   // Add the real parts
    result->imag = c1->imag + c2->imag;   // Add the imaginary parts
}

