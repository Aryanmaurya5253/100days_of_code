// Q17 (Conditional Statements)
// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main()
{
    // Ax^2 + Bx + C = 0
    // The roots of a quadratic equation can be found using the quadratic formula:

    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a: ");
    scanf("%f", &a);
    printf("Enter coefficients b: ");
    scanf("%f", &b);
    printf("Enter coefficients c: ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c; // The formula of discriminant is b^2 - 4ac
    // There are three cases for the roots of a quadratic equation based on the value of the discriminant:
    // 1. If the discriminant is positive, the equation has two distinct real roots.
    // 2. If the discriminant is zero, the equation has exactly one real root (a repeated root).
    // 3. If the discriminant is negative, the equation has two complex roots.

    if (discriminant > 0)
    { // if the discriminant is greater than 0
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1); //%.2f is used to print the float value upto 2 decimal places
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    { // if the discriminant is equal to 0
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    { // if the discriminant is less than 0
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}