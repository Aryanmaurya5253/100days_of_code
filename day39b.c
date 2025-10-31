/*
Q79 (2D Arrays)
Perform diagonal traversal of a matrix.

Diagonal traversal means printing all elements where
   the row index and column index are equal (i == j).

Example:
1 2 3
4 5 6
7 8 9
Diagonal elements → 1, 5, 9
Output → 1 5 9
*/

#include <stdio.h>

int main() {
    int n;

    // Step 1: Take the size of the square matrix
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n]; // Declare 2D array

    // Step 2: Take input for matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Print elements along the main diagonal
    printf("Diagonal traversal of the matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); // print element where i == j
    }

    printf("\n"); // move to new line after printing

    return 0;
}

