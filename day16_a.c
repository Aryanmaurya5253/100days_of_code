// Q31 (Loops without Arrays/Strings)
// Program to convert a decimal number into its binary representation
// using a while loop (no arrays or strings)

#include <stdio.h>

int main(void)
{
    int num;         // input number
    int binary = 0;  // final binary number (stored as integer)
    int place = 1;   // multiplier for binary digit position
    int remainder;   // remainder when dividing by 2

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0)
    {
        printf(" Error: Please enter a positive number.\n");
        return 1; // exit with error
    }

    // Loop until number becomes 0
    while (num > 0)
    {
        remainder = num % 2;                 // extract last binary digit
        binary = binary + (remainder * place); // add digit in correct position
        place = place * 10;                  // shift place to the left
        num = num / 2;                       // reduce number
    }

    // Display the result
    printf("Binary representation = %d\n", binary);

    return 0; // successful execution
}
