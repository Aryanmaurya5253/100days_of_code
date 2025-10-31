// Q62 (Arrays (1D))
// Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0 , end = n - 1;
    while (start < end) {
        // Swap arr[start] and arr[end]
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
