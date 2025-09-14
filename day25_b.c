// Q50( Nested Loops without Arrays/Strings)
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
    for (i = rows; i >= 1; i--)        // i decreases
    {
        for (j = i; j <= rows; j++)    // j increases
        {
            printf("*", j);
        }
        printf("\n");
    }

    return 0;
}
