#include <stdio.h>

/*
 * Program: Diamond Star Pattern
 * Q53 (Nested Loops without Arrays/Strings)
 *
 * Pattern Example (rows = 5):
 * *
 * ***
 * *****
 * *******
 * *********
 * *******
 * *****
 * ***
 * *
 */

int main(void) {
    int i, j, rows;

    // Input number of rows for the top half
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Top half (including middle line)
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
