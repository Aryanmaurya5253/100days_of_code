// Q59 (Arrays (1D))
// Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n, i;
    
    // Asking the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // array declaration
    int evenCount = 0, oddCount = 0;

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Checking even or odd
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output result
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}
