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

    // Find next greater element for each element
    printf("Next Greater Elements: ");
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Default if no greater element is found

        // Check all elements on the right side of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Stop once first greater element is found
            }
        }

        // Print result
        printf("%d", nextGreater);

        // Print comma after each element except the last
        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
