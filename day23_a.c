/*
Q45 (Loops without Arrays/Strings)
Write a program to find the sum of the series:
2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
*/

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0f;   // use float for fractional values

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Loop to calculate sum
    for (int i = 1; i <= n; i++) {
        float numerator = 2.0f* i;        // even number
        float denominator = 4.0f * i - 1;  // denominator pattern
        sum = sum + (numerator / denominator);
    }

    // Output the result
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
