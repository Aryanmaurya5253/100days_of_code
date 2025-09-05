

// Q25 (Conditional Statements)
// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int num1, num2; // variables to store two numbers
    char op;        // variable to store the operator

    // asking the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter secound number:");
        scanf("%d", &num2);

    // asking the user to enter an operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c to avoid newline issue

    // using switch case to check which operator is entered
    switch (op) {
        case '+': // if operator is +
            printf("Result = %d\n", num1 + num2);
            break;

        case '-': // if operator is -
            printf("Result = %d\n", num1 - num2);
            break;

        case '*': // if operator is *
            printf("Result = %d\n", num1 * num2);
            break;

        case '/': // if operator is /
            if (num2 != 0) // checking divide by zero
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed\n");
            break;

        case '%': // if operator is %
            if (num2 != 0) // checking divide by zero
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error: Modulo by zero is not allowed\n");
            break;

        default: // if operator is not valid
            printf("Invalid operator\n");
    }

    return 0; 
}
