// Q72 (2D Arrays)
// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int a[10][10], r, c, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
