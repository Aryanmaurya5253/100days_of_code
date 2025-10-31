// Q64 (Arrays (1D))
// Find the digit that occurs the most times in an integer number

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  // frequency array for digits 0–9
    int digit, maxDigit = 0, maxCount = 0;

    // Input number
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxCount);

    return 0;
}
