#include <stdio.h>

int main(void) {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is NOT a prime number.\n", num);
        return 0;
    }

    // check divisibility up to num/2 (efficient enough for simple code)
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; // found a divisor
            break;
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}
