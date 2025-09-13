// Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

#include <stdio.h>
int main(void)
{
    int i, j, rows;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Print pattern
    for (i = 1; i <= rows; i++)
    { // Loop for each row
        for (j = 1; j <= i; j++)
        { // Loop to print stars in each row
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}