// Q38 (Loops without Arrays/Strings)
// Program to find the sum of digits of a number

#include <stdio.h>

int main(void) {
    int number, sum = 0, digit;

    /*
     * Sum of Digits:
     
     * Example: number = 753
     * Digits: 7, 5, 3
     * Sum = 7 + 5 + 3 = 15
     *
     * Approach:
    
     * 1. Extract the last digit using modulus (% 10).
     * 2. Add it to sum.
     * 3. Remove the last digit using division (/ 10).
     * 4. Repeat until number becomes 0.
     */

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    

    // Loop until number reduces to 0
    while (number > 0) {
        digit = number % 10;   // Get last digit
        sum += digit;          // Add to sum
        number = number / 10;  // Remove last digit
    }

    // Output
    printf(" Sum of digits = %d\n", sum);

    return 0;
}
