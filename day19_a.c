// Q37 (Loops without Arrays/Strings)
// Program to find the LCM (Lowest Common Multiple) of two numbers

#include <stdio.h>

int main(void) {
    int firstNumber, secondNumber, lcm;

    /*
     * LCM (Lowest Common Multiple):
     
     * The smallest positive integer that is divisible by both numbers.
     *
     * Approach:
     * 1. Start from the larger of the two numbers.
     * 2. Keep checking numbers until one is divisible by both.
     * 3. That number is the LCM.
     */

    // Input
    printf("Enter first positive integers: ");
    scanf("%d ", &firstNumber);
    printf("Enter secound positive integers: ");
    scanf("%d ", &secondNumber);

    

    // Use ternary operator instead of if-else
    lcm = (firstNumber > secondNumber) ? firstNumber : secondNumber;

    // Loop until LCM is found
    while (1) {
        if (lcm % firstNumber == 0 && lcm % secondNumber == 0) {
            break; // LCM found
        }
        lcm++; // check next number
    }

    // Output
    printf(" The LCM of %d and %d is: %d\n", firstNumber, secondNumber, lcm);

    return 0;
}
