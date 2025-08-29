// Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int num1, num2, temp; // we use temp to  swap the values

    // Taking input from user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swapping the numbers using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Displaying the swapped numbers
    printf("After swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
