#include <stdio.h>

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x value: ");
    scanf("%d", &x);

    int index = -1;

    // Simple linear search (O(n)) — beginner friendly
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;  // stop because we need the first element >= x
        }
    }

    printf("%d\n", index);

    return 0;
}