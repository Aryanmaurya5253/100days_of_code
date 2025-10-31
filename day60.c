#include <stdio.h>

int main() {
    int n, k;

    // Step 1: Take size of array
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Take array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Take subarray size
    printf("Enter value of k: ");
    scanf("%d", &k);

    // Step 4: For each subarray, find the maximum element
    printf("Maximum elements in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];  // Assume first element is max

        // Compare next elements in the window
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        // Print the maximum for this subarray
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
