// Q21 (Conditional Statements)
// Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main()
{
    int month; // define a variable as a name of month
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    switch (month) // we use switch statement to check the value of month

    {
    case 1: // if the value of month is 1 then it is January
        printf("January has 31 days.\n");
        break;
    case 2: // if the value of month is 2 then it is February
        printf("February has 28 days (29 in a leap year).\n");
        break;
    case 3: // if the value of month is 3 then it is March
        printf("March has 31 days.\n");
        break;
    case 4: // if the value of month is 4 then it is April
        printf("April has 30 days.\n");
        break;
    case 5: // if the value of month is 5 then it is May
        printf("May has 31 days.\n");
        break;
    case 6: // if the value of month is 6 then it is June
        printf("June has 30 days.\n");
        break;
    case 7: // if the value of month is 7 then it is July
        printf("July has 31 days.\n");
        break;
    case 8: // if the value of month is 8 then it is August
        printf("August has 31 days.\n");
        break;
    case 9: // if the value of month is 9 then it is September
        printf("September has 30 days.\n");
        break;
    case 10: // if the value of month is 10 then it is October
        printf("October has 31 days.\n");
        break;
    case 11: // if the value of month is 11 then it is November
        printf("November has 30 days.\n");
        break;
    case 12: // if the value of month is 12 then it is December
        printf("December has 31 days.\n");
        break;
    default: // if the value of month is not between 1 and 12 then it is invalid
        printf("Invalid input! Please enter a number between 1 and 12.\n");
    }
    //We use switch-case to determine the month name and number of days based on the input month number. Each case corresponds to a month, and the default case handles invalid inputs.
    //And we use break statement to exit the switch-case after executing the matched case.

    return 0;
}
