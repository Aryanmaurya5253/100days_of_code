// Q73 (2D Arrays)
// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int a[10][10], r, c, rowSum[10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            rowSum[i] += a[i][j];
        }
    }

    // Print row sums
    printf("Sum of each row:\n");
    for (int i = 0; i < r; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
