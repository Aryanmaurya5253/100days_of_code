#include <stdio.h>

int main() {
    int n, k;

    // Step 1: Take size of array
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Take elements as input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Take size of subarray (k)
    printf("Enter value of k: ");
    scanf("%d", &k);

    int maxSum = 0;     // To store the maximum sum found
    int currentSum = 0; // To store sum of each subarray

    // Step 4: Loop through each subarray of size k
    for (int i = 0; i <= n - k; i++) {
        currentSum = 0; // Reset for every subarray

        // Add elements from i to i+k-1
        for (int j = i; j < i + k; j++) {
            currentSum = currentSum + arr[j];
        }

        // Check if this subarray's sum is greater than maxSum
        if (i == 0 || currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    // Step 5: Print result
    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);

    return 0;
}
