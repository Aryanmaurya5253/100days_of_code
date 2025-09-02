// Q18 (Conditional Statements)
// Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main()
{
    int percentage; // define a variable as a name of percentage
    printf("Enter your percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 90 && percentage <= 100) // we use if statement to check if the percentage is between 90 and 100
    {
        printf("Your grade is A.\n"); // if the percentage is between 90 and 100 then the grade is A
    }
    else if (percentage >= 80 && percentage < 90) // we use else if statement to check if the percentage is between 80 and 90
    {
        printf("Your grade is B.\n"); // if the percentage is between 80 and 90 then the grade is B
    }
    else if (percentage >= 70 && percentage < 80) // we use else if
    {
        printf("Your grade is C.\n"); // if the percentage is between 70 and 80 then the grade is C
    }

    {
        printf("Your grade is F.\n");
        printf("You have failed. Better luck next time!\n");
    }

    return 0;
}
