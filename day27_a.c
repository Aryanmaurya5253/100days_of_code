#include <stdio.h>

/*
 * Program: Diamond Star Pattern
 * Author : [Your Name]
 * Q53: Nested Loops without Arrays/Strings
 *
 * Pattern Example (rows = 5):
 *     *
 *    ***
 *   *****
 *  *******
 * *********
 *  *******
 *   *****
 *    ***
 *     *
 */

int main(void) {
    int i, j, rows;

    // Input number of rows for the upper half
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Top half (including middle line)
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
