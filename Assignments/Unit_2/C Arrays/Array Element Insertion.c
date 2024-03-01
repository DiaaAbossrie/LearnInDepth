/*
* Author: Diaa Abossrie
* Title: Array Element Insertion Program
*
* Description:
* This C program initializes an array with consecutive numbers,
* takes input for the number of elements, displays the initial array,
* takes input for an element and its location, inserts the element at the specified location,
* and then displays the array after insertion.
*/

#include <stdio.h>
#define SIZE 100

int main(void) {
    int arr[SIZE], i, n, data_value, data_location;

    // Initialize the array with consecutive numbers
    for (i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
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

    // Prompt the user to enter the element to be inserted
    printf("\nEnter the element to be inserted: ");
    fflush(stdout);
    scanf("%d", &data_value);

    // Prompt the user to enter the location for insertion
    printf("Enter the location (1 to %d): ", n + 1);
    fflush(stdout);
    scanf("%d", &data_location);

    // Check if the entered location is valid
    if (data_location < 1 || data_location > n + 1) {
        printf("Wrong index!!\n");
        return 0;
    }

    // Shift elements to the right to make space for the new element
    for (i = n - 1; i >= data_location - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element at the specified location
    arr[data_location - 1] = data_value;

    // Display the array after insertion
    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
        fflush(stdout);
    }

    return 0;
}

