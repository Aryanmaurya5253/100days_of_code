// Q57 (Arrays (1D))
// Write a program to find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements in array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find sum of array elements
    for(i = 0; i < n; i++) {
        sum =arr[i] + sum;
    }

    // Display result
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
