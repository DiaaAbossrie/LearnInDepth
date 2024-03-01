/*
* Author: Diaa Abossrie
* Title: Matrix Transposition Program
*
* Description:
* This C program dynamically allocates memory for a matrix, takes input for the matrix,
* computes the transpose of the matrix, and then prints both the original matrix and its transpose.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows, cols, i, j;
    int **arr_ptr, **arr_trans_ptr;

    // Prompt the user to enter the number of rows and columns
    printf("Enter number of rows: ");
    fflush(stdout);
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    fflush(stdout);
    scanf("%d", &cols);

    // Allocate memory for the original matrix
    arr_ptr = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        arr_ptr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Allocate memory for the transposed matrix
    arr_trans_ptr = (int **)malloc(cols * sizeof(int *));
    for (i = 0; i < cols; i++) {
        arr_trans_ptr[i] = (int *)malloc(rows * sizeof(int));
    }

    // Input elements for the original matrix
    printf("Enter the elements of the matrix:\n");
    fflush(stdout);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            fflush(stdout);
            scanf("%d", &arr_ptr[i][j]);
        }
    }

    // Compute the transpose of the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr_trans_ptr[j][i] = arr_ptr[i][j];
        }
    }

    // Print the original matrix
    printf("\nEntered Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d  ", arr_ptr[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d  ", arr_trans_ptr[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory for both matrices
    for (i = 0; i < rows; i++) {
        free(arr_ptr[i]);
    }
    free(arr_ptr);

    for (i = 0; i < cols; i++) {
        free(arr_trans_ptr[i]);
    }
    free(arr_trans_ptr);

    return 0;
}

