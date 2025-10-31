/*
Q76 (2D Arrays)
Check if a matrix is symmetric.

 A matrix is called symmetric if it is equal to its transpose.
That means: a[i][j] == a[j][i] for all i and j.

Example:
1 2
2 1
This is symmetric because transpose is also same.
*/

#include <stdio.h>

int main() {
    int n;

    // Step 1: Ask user for the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n]; // declaring 2D array

    // Step 2: Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Check if the matrix is symmetric
    int isSymmetric = 1; // assume it is symmetric

    // Compare each element with its transpose element
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // if elements at (i,j) and (j,i) are not same
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // mark it as not symmetric
                break; // no need to check further
            }
        }
        if (isSymmetric == 0)
            break;
    }

    // Step 4: Print the result
    if (isSymmetric == 1)
        printf("True (The matrix is symmetric)\n");
    else
        printf("False (The matrix is not symmetric)\n");

    return 0;
}

