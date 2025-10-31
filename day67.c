#include <stdio.h>

int main() {
    int m, n, i;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter elements of first array:\n");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int c[m + n];

    // Copy elements of first array
    for (i = 0; i < m; i++)
        c[i] = a[i];

    // Copy elements of second array
    for (i = 0; i < n; i++)
        c[m + i] = b[i];

    printf("Merged array:\n");
    for (i = 0; i < m + n; i++)
        printf("%d ", c[i]);

    return 0;
}
