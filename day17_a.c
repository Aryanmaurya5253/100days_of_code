#include <stdio.h>
#include <math.h>  // for pow() function

int main(void) {
    int num, original, remainder, n = 0;
    double result = 0.0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number for comparison

    // Count number of digits (important for power calculation)
    int temp = num;
    while (temp != 0) {
        temp /= 10;  // remove last digit
        n++;         // count digits
    }

    // Calculate sum of digits raised to the power n
    temp = num;  // reset temp to original number
    while (temp != 0) {
        remainder = temp % 10;                     // extract last digit
        result += pow(remainder, n);               // raise digit to n and add
        temp /= 10;                                // remove last digit
    }

    // Check if Armstrong or not
    if ((int)result == original)
        printf(" %d is an Armstrong number.\n", original);
    else
        printf(" %d is NOT an Armstrong number.\n", original);

    return 0;
}
