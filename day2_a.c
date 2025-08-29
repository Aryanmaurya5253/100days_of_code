// Q3 (User Inputs, Operations & Output)
// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;//we will use float because the length and breadth can be in decimal values.

    // Taking input from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculating area and perimeter of rectangle
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Displaying results as a output
    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}