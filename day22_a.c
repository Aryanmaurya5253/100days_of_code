/*
Q43 (Loops without Arrays/Strings)
Write a program to check if a number is a Strong Number.

A Strong Number is a number in which the sum of factorials of its digits
   is equal to the number itself.
   Example: 145 = 1! + 4! + 5! = 145
*/

#include <stdio.h>

int main() {
    int num, original, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    // Loop through digits
    while (num > 0) {
        int digit = num % 10;   // extract last digit

        // calculate factorial of digit directly
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
           fact = fact * i;
        }

        sum = sum + fact;   // add factorial to sum
        num = num/ 10;      // remove last digit
    }

    // Check if Strong Number
    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is NOT a Strong Number.\n", original);
    }

    return 0;
}
