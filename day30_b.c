// Q60 (Arrays (1D))
// Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    
    // Asking the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // array declaration
    int posCount = 0, negCount = 0, zeroCount = 0;

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Checking type of number
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    // Output result
    printf("Positive numbers: %d\n", posCount);
    printf("Negative numbers: %d\n", negCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}
