#include <stdio.h>

int main() {
    int n;

    // Take array size input
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Take array elements input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element for each element
    printf("Previous Greater Elements: ");
    for (int i = 0; i < n; i++) {
        int prevGreater = -1; // Default if no greater element on left

        // Check all elements on the left side of arr[i]
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // Stop once first greater element is found
            }
        }

        // Print result
        printf("%d", prevGreater);

        // Print comma after each element except the last
        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
