/*
* Author: Diaa Abossrie
* Title: Array Element Search Program
*
* Description:
* This C program initializes an array with multiples of 11,
* takes input for the number of elements, displays the initial array,
* takes input for an element to be searched for, searches for the element,
* and then prints the location if the element is found.
*/

#include <stdio.h>
#define SIZE 100

int main(void) {
    int arr[SIZE], i, data, n, check = 0;

    // Initialize the array with multiples of 11
    for (i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 11;
    }

    // Prompt the user to enter the number of elements
    printf("Enter no of elements (less than or equal to %d): ", SIZE);
    fflush(stdout);
    scanf("%d", &n);

    // Check if the number of elements exceeds the array size
    if (n > SIZE) {
        printf("Number of elements exceeds array size.\n");
        return 0;
    }

    // Display the initial array elements
    printf("Initial array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        fflush(stdout);
    }

    // Prompt the user to enter the element to be searched for
    printf("\nEnter the element to be searched for: ");
    fflush(stdout);
    scanf("%d", &data);

    // Search for the element in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == data) {
            check = 1;
            break;
        }
    }

    // Print the result based on whether the element is found or not
    if (check) {
        printf("Number is found at the location: %d", i + 1);
    } else {
        printf("Number is not found!");
    }

    return 0;
}

