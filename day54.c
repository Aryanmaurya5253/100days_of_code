// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n, x;
    int sum1, sum2;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop through all numbers from 1 to n
    for (x = 1; x <= n; x++) {
        sum1 = 0;
        sum2 = 0;

        // Find sum from 1 to x
        for (int i = 1; i <= x; i++) {
            sum1 = sum1 + i;
        }

        // Find sum from x to n
        for (int i = x; i <= n; i++) {
            sum2 = sum2 + i;
        }

        // Check if both sums are equal
        if (sum1 == sum2) {
            printf("Pivot integer is: %d\n", x);
            return 0; // Exit after finding pivot
        }
    }

    // If no pivot integer found
    printf("-1\n");

    return 0;
}
