/*
Q80 (2D Arrays)
Multiply two matrices.

 Matrix multiplication rule:
If matrix A is of size m x n and matrix B is of size n x p,
then the result matrix C will be of size m x p.
Each element C[i][j] = sum of A[i][k] * B[k][j] for k = 0 to n-1
*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Step 1: Input size of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int matrix1[r1][c1]; // declare first matrix

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Step 2: Input size of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int matrix2[r2][c2]; // declare second matrix

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Step 3: Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second.\n");
        return 0;
    }

    // Step 4: Declare result matrix
    int result[r1][c2];

    // Initialize result matrix elements to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Step 5: Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) { // or k < r2 (same)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Step 6: Print result matrix
    printf("Resultant Matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

