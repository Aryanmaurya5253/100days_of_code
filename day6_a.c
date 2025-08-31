// Q11 (Conditional Statements)
// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main()
{
    int number;//define a variable as a name of number
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)// we use modulus operator to check if the number is divisible by 2 or not.
    {
        printf("%d is even.\n", number);
    }
    else// if the number is not divisible by 2 then it is odd.
    {
        printf("%d is odd.\n", number);
     }
      return 0;
    }