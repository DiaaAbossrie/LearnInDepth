/*
* Author: Diaa Abossrie
* Title: Distance Addition Program
*
* Description:
* This C program defines a structure to represent distances in feet and inches.
* It takes two distances as input from the user, adds them together, and displays the total distance.
*/

#include <stdio.h>

// Define a structure to hold distance information
typedef struct {
    int feet;       // Variable to hold the distance in feet
    float inches;   // Variable to hold the distance in inches
} Distance;

int main(void) {
    // Declare variables to hold the total distance
    int feet_total;
    float inches_total;

    // Declare variables of type Distance
    Distance first_dist, second_dist;

    // Prompt the user to enter the first distance
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &first_dist.feet);
    printf("Enter inches: ");
    fflush(stdout);
    scanf("%f", &first_dist.inches);

    // Prompt the user to enter the second distance
    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &second_dist.feet);
    printf("Enter inches: ");
    fflush(stdout);
    scanf("%f", &second_dist.inches);

    // Calculate the total distance
    feet_total = first_dist.feet + second_dist.feet;
    inches_total = first_dist.inches + second_dist.inches;

    // Convert inches to feet if greater than or equal to 12
    while (inches_total >= 12) {
        inches_total -= 12;
        feet_total += 1;
    }

    // Display the total distance
    printf("Sum of distances = %d' %0.2f\"\n", feet_total, inches_total);
    fflush(stdout);

    return 0;
}

