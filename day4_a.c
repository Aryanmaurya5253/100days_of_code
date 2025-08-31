// Q7 (User Inputs, Operations & Output)
// Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int num1, num2; // In this we dont use temp we use only two variables num1 and num2.

    // Taking input from user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swapping without using a third variable
    num1 = num1 + num2; // sum stored in num1
    num2 = num1 - num2; // now num2 = original num1
    num1 = num1 - num2; // now num1 = original num2
    // In this we dont use temp as a third variable then we use arithmetic operation to swap the value.
    // like first we sum both the number and store it in num1 then we subtract num2 from num1 and store it in num2
    // now num2 has the value of original num1 then we subtract new num2 from num
    //  Displaying the swapped numbers
    printf("After swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}
