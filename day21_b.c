#include <stdio.h>

int main() {
    int num, sum = 0;   // num = input number, sum = sum of divisors

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to find divisors and sum them
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {   // if i is a divisor
            sum = sum + i;
        }
    }

    // Check if sum of divisors = number
    if (sum == num && num != 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}
