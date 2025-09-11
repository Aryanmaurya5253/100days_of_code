// Q41 (Loops without Arrays/Strings)
// Program to swap the first and last digit of a number

#include <stdio.h>
#include <math.h> // for pow()

int main(void)
{
    int num, firstDigit, lastDigit, digits = 0, middlePart, newNumber;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    // Count digits of the number
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    // Extract first digit
    firstDigit = num / (int)pow(10, digits - 1);

    // Extract last digit
    lastDigit = num % 10;

    // Extract middle part (remove first and last digit)
    middlePart = (num % (int)pow(10, digits - 1)) / 10;

    newNumber = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    // Output
    printf("Number after swapping first and last digit = %d\n", newNumber);

    return 0;
}
