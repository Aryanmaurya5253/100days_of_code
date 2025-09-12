/*
Q44 (Loops without Arrays/Strings)
Write a program to find the sum of the series:
1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;   // sum should be double because fractions are involved

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Loop to calculate sum
    for (int i = 1; i <= n; i++) {
        float numerator = (2.0 * i - 1);   // odd number
        float denominator = (2.0 * i);     // even number
        sum = sum + (numerator / denominator);
    }

    // Output the result
    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
