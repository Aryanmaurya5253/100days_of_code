// Q36 (Loops without Arrays/Strings)
// Program to find the HCF  of two numbers

#include <stdio.h>

int main(void)
{
    int num1, num2, hcf = 1; // hcf initialized to 1 (smallest possible)

    /*
     * What is HCF (Highest Common Factor)?

     * The HCF of two numbers is the largest positive integer
     * that divides both numbers without leaving any remainder.
     * Example:
     *   Numbers: 12 and 18
     *   Factors of 12 = 1, 2, 3, 4, 6, 12
     *   Factors of 18 = 1, 2, 3, 6, 9, 18
     *   Common factors = 1, 2, 3, 6
     *   Highest common factor = 6
     *
     * How to get HCF (Basic Method)?

     * 1. Find the smaller of the two numbers.
     * 2. Run a loop from 1 up to that smaller number.
     * 3. In each step, check if 'i' divides both numbers.
     * 4. The largest such 'i' will be the HCF.
     */

    // Taking input from user
    printf("Enter first positive integers: ");
    scanf("%d", &num1);
    printf("Enter secound positive integers: ");
    scanf("%d", &num2);

    // Loop runs from 1 to the smaller of the two numbers
    for (int i = 1; i <= (num1 < num2 ? num1 : num2); i++)
    {
        // If i divides both numbers completely, update hcf
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
