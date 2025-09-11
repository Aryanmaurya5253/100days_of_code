// Q39 (Loops without Arrays/Strings)
// Program to find the product of odd digits of a number

#include <stdio.h>

int main(void)
{
    int number, digit;
    int product = 1; // Start product with 1 (multiplicative identity)
    int Odd = 0;     // To track if there are any odd digits

    /*
     * Example:

     * number = 7534
     * Digits: 7, 5, 3, 4
     * Odd digits: 7, 5, 3
     * Product = 7 × 5 × 3
     *
     * Approach:

     * 1. Extract digits using % 10.
     * 2. Check if digit is odd (digit % 2 != 0).
     * 3. If odd → multiply into product.
     * 4. Divide number by 10 to remove last digit.
     * 5. Repeat until number becomes 0.
     */

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Process digits
    while (number > 0)
    {
        digit = number % 10; // Extract last digit
        if (digit % 2 != 0)
        { // Check if odd
            product *= digit;
            Odd = 1; // Found at least one odd digit
        }
        number /= 10; // Remove last digit
    }

    // Output
    if (Odd)
    {
        printf(" Product of odd digits = %d\n", product);
    }
    else
    {
        printf(" No odd digits found, product cannot be computed.\n");
    }

    return 0;
}
