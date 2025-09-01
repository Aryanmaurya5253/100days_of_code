// Q13 (Conditional Statements)
// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main()
{
    int year;                 // define a variable as a name of year
    printf("Enter a year: "); // enter the year
    scanf("%d", &year);
    if (year % 4 == 0) // we use if statement to check if the year is divisible by 4 or not.
    {
        printf("%d is a leap year.\n", year); // if the year is divisible by 4 then it is a leap year.
    }
    else
    { // if the year is not divisible by 4 then it is not a leap year.
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}