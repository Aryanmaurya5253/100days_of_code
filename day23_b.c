/*
Q46 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
*****
*****
*****
*****
But the number of rows and columns should be taken from the user.
*/

#include <stdio.h>

int main() {
    int rows, cols;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Outer loop → rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop → columns
        for (int j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}
