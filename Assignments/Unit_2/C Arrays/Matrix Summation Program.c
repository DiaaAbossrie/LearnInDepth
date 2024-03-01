/*
* Author: Diaa Abossrie
* Title: Matrix Summation Program
*
* Description:
* This C program prompts the user to enter elements for two 2x2 matrices,
* calculates the sum of the matrices, and then prints the result.
*/

#include <stdio.h>

int main(void) {
    float arr1[2][2], arr2[2][2], sum[2][2];
    int i_counter, j_counter;

    // Prompt the user to enter the elements of the 1st matrix
    printf("Enter the elements of the 1st matrix:\n");
    fflush(stdout);
    for (i_counter = 0; i_counter < 2; i_counter++) {
        for (j_counter = 0; j_counter < 2; j_counter++) {
            printf("Enter a%d%d: ", i_counter + 1, j_counter + 1);
            fflush(stdout);
            scanf("%f", &arr1[i_counter][j_counter]);
        }
    }

    // Prompt the user to enter the elements of the 2nd matrix
    printf("Enter the elements of the 2nd matrix:\n");
    for (i_counter = 0; i_counter < 2; i_counter++) {
        for (j_counter = 0; j_counter < 2; j_counter++) {
            printf("Enter b%d%d: ", i_counter + 1, j_counter + 1);
            fflush(stdout);
            scanf("%f", &arr2[i_counter][j_counter]);
        }
    }

    // Calculate the sum of the matrices
    for (i_counter = 0; i_counter < 2; i_counter++) {
        for (j_counter = 0; j_counter < 2; j_counter++) {
            sum[i_counter][j_counter] = arr1[i_counter][j_counter] + arr2[i_counter][j_counter];
        }
    }

    // Print the sum of the matrices
    printf("Sum of the matrices:\n");
    for (i_counter = 0; i_counter < 2; i_counter++) {
        for (j_counter = 0; j_counter < 2; j_counter++) {
            printf("%f\t", sum[i_counter][j_counter]);
        }
        printf("\n");
    }

    return 0;
}

