/*
Q77 (2D Arrays)
Check if the elements on the diagonal of a matrix are distinct.

 Diagonal elements are those where row index == column index.
Example: In a 3x3 matrix:
1 2 3
4 5 6
7 8 9
→ Diagonal elements = 1, 5, 9

We must check that no two diagonal elements are the same.
*/

#include <stdio.h>

int main() {
    int n;

    // Step 1: Take the size of the square matrix
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n]; // Declare 2D array

    // Step 2: Take input for matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Extract diagonal elements into a 1D array
    int diagonal[n];
    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i]; // elements where i == j
    }

    // Step 4: Check if diagonal elements are distinct
    int distinct = 1; // assume they are all unique

    // Compare every pair of diagonal elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0; // found duplicate
                break;
            }
        }
        if (distinct == 0)
            break;
    }

    // Step 5: Print the result
    if (distinct == 1)
        printf("True (All diagonal elements are distinct)\n");
    else
        printf("False (Diagonal elements are not distinct)\n");

    return 0;
}

