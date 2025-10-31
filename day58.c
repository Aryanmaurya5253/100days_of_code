// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int n;

    // Take size of array as input
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    // Take array elements input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate product for each element except itself
    for (int i = 0; i < n; i++) {
        int product = 1;  // Start with 1 (multiplicative identity)

        // Multiply all elements except nums[i]
        for (int j = 0; j < n; j++) {
            if (i != j) {
                product = product * nums[j];
            }
        }

        answer[i] = product;  // Store result
    }

    // Print the resulting array
    printf("Resulting array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
