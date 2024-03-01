/*
* Author: Diaa Abossrie
* Title: Dynamic Array Average Calculation Program
*
* Description:
* This C program dynamically allocates an array of floating-point numbers,
* prompts the user to input the numbers, calculates their average,
* and then prints the result.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float *arr_ptr, avg = 0;
    int n, i;

    // Prompt the user to enter the number of elements
    printf("Enter number of elements:");
    fflush(stdout);
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr_ptr = (float *)malloc(n * sizeof(float));

    // Prompt the user to enter the numbers
    for (i = 0; i < n; i++) {
        printf("%d. Enter number: ", i + 1);
        fflush(stdout);
        scanf("%f", arr_ptr + i);
    }

    // Calculate the average of the numbers
    for (i = 0; i < n; i++) {
        avg += *(arr_ptr + i);
    }
    avg /= n;

    // Print the average
    printf("Average = %0.3f", avg);

    // Free the dynamically allocated memory
    free(arr_ptr);

    return 0;
}

