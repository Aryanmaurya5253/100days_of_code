// Q4 (User Inputs, Operations & Output)
// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    float radius, area, circumference;

    // Taking input from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area and circumference 
    //we use pi as a 3.14 for better calculation
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    // Displaying results
    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f\n", circumference);

    return 0;
}