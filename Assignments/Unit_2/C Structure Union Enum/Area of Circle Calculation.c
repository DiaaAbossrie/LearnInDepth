/*
* Author: Diaa Abossrie
* Title: Area of Circle Calculation
*
* Description:
* This C program calculates the area of a circle using a macro.
* The radius is input by the user, and the area is calculated using the formula πr^2.
*/

#include <stdio.h>

// Define a macro to calculate the area of a circle
#define PI 3.14159265358979323846
#define AREA_OF_CIRCLE(r) (PI * (r) * (r))

int main(void) {
    float radius, area;

    // Prompt the user to enter the radius of the circle
    printf("Enter the radius: ");
    fflush(stdout);
    scanf("%f", &radius);

    // Calculate the area using the macro
    area = AREA_OF_CIRCLE(radius);

    // Display the calculated area
    printf("Area = %.2f\n", area);

    return 0;
}

