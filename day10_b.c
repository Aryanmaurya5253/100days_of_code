// Q20 (Conditional Statements)
// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main()
{
    int day; // define a variable as a name of day
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    switch (day) // we use switch statement to check the value of day
    {
    case 1: // if the value of day is 1 then it is Monday
        printf("Monday\n");
        break;
    case 2: // if the value of day is 2 then it is Tuesday
        printf("Tuesday\n");
        break;
    case 3: // if the value of day is 3 then it is Wednesday
        printf("Wednesday\n");
        break;
    case 4: // if the value of day is 4 then it is Thursday
        printf("Thursday\n");
        break;
    case 5: // if the value of day is 5 then it is Friday
        printf("Friday\n");
        break;
    case 6: // if the value of day is 6 then it is Saturday
        printf("Saturday\n");
        break;
    case 7: // if the value of day is 7 then it is Sunday
        printf("Sunday\n");
        break;
    default: // if the value of day is not between 1 and 7 then it is invalid
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}