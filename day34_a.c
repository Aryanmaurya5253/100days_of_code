// Q67 (Arrays - 1D)
// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, pos, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];  // shift right
    }

    arr[pos - 1] = element;  // insert element
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
