// Q29 (Loops without Arrays/Strings)
// Program to calculate the factorial of a number using a loop

#include <stdio.h>

int main(void)
{
    int num;       // input number
    int factorial; // result of factorial
    int i;         // loop counter

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for invalid input
    if (num < 0)
    {
        printf("❌ Factorial is not defined for negative numbers.\n");
        return 1; // exit with error code
    }

    factorial = 1; // initialize result

    // Loop to calculate factorial
    for (i = 1; i <= num; i++)
    {
        factorial *= i; // multiply step by step
    }

    // Display the result
    printf("Factorial of %d = %d\n", num, factorial);

    return 0; // successful execution
}
