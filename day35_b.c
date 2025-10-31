// Q70 (Arrays - 1D)
// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;  // in case k > n

    for (int r = 0; r < k; r++) {
        int last = arr[n - 1];
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
