// Q66 (Arrays - 1D)
// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, element, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];  // assuming max size 100
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find position
    pos = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
