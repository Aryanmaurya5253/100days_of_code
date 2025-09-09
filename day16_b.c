// A palindrome is a number, word, or sequence that reads the same forwards and backwards.

// Q32 (Loops without Arrays/Strings)
// Program to check if a number is a palindrome

#include <stdio.h>

int main(void)
{
    int num, originalNum, reversed = 0, digit;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Reverse the number
    while (num != 0)
    {
        digit = num % 10;             // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;               // remove last digit
    }

    // Check if original and reversed numbers are equal
    if (originalNum == reversed)
    {
        printf("%d is a palindrome.\n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0; // successful execution
}
