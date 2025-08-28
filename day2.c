
// Q2 (User Inputs, Operations & Output)
// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, mul; // firstly we define the varibale a b and c,
    float div;
    printf("Enter the value of num1:\n"); //
    scanf("%d", &num1);                   // assign the value to a by user.
    printf("Enter the value of num2:\n");
    scanf("%d", &num2); // assign the value to b by user.

    sum = (num1 + num2); // this is assingmnet which we want to do.
    // in c we define the what we want to proceed like in this we want to do adddition between two integers a and b.
    printf("The addition of a and b is %d\n", sum); // this is the final execution of the assingment.
    div = (num1 / num2);
    printf("The divison of a and b is %.2f\n", div);
    //.2f is used to print the decimal value upto 2 places.
    sub = (num1 - num2);
    printf("The substraction of a and b is %d\n", sub);
    mul = (num1 * num2);
    printf("The multiplication of a and b is %d\n", mul);
    return 0;
}