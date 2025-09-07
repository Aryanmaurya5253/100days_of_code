// Q30 (Loops without Arrays/Strings)
// Program to reverse a given number using a for loop

#include <stdio.h>

int main()
{
    int num;       // input number
    int reversed;  // reversed number
    int digit;     // to store each extracted digit

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    reversed = 0; // initialize reversed number

    // Use for loop: keep dividing num until it becomes 0
    for (; num != 0; num = num / 10)
    {
        digit = num % 10;                // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
    }

    // Display the result
    printf("Reversed number = %d\n", reversed);

    return 0; // successful execution
}
