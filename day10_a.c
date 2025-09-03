// Q19 (Conditional Statements)
// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first side:");
    scanf("%d", &a);
    printf("Enter second side:");
    scanf("%d", &b);

    printf("Enter third side:");
    scanf("%d", &c);
    if (a == b && b == c)
    // Int this we check if all the sides are equal or not.
    // If all the sides are equal then it is an Equilateral triangle.
    // If any two sides are equal then it is an Isosceles triangle.
    // If no sides are equal then it is a Scalene triangle.
    // And in this we use and operator to check if all the sides are equal or not.
    // And use == operator to check if the sides are equal or not.
    {
        printf("The triangle is Equilateral.\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("The triangle is Isosceles.\n");
    }
    else
    {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}