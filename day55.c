#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = -1;  // Default value if no majority element is found

    // Outer loop to pick each element
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Inner loop to count how many times nums[i] appears
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        // Check if it appears more than n/2 times
        if (count > n / 2) {
            majority = nums[i];
            break; // since only one majority element can exist
        }
    }

    // Print result
    if (majority != -1)
        printf("Majority element: %d\n", majority);
    else
        printf("-1\n");

    return 0;
}
