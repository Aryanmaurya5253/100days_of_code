/*
Q78 (2D Arrays)
Find the sum of main diagonal elements for a square matrix.

The main diagonal elements are those where row index == column index.

Example:
1 2 3
4 5 6
7 8 9
→ Diagonal elements = 1, 5, 9
→ Sum = 1 + 5 + 9 = 15
*/

#include <stdio.h>

int main() {
    int n;

    // Step 1: Input size of square matrix
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n]; // Declare 2D array

    // Step 2: Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Calculate sum of diagonal elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + matrix[i][i]; // add elements where i == j
    }

    // Step 4: Display result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
