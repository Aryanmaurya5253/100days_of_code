// Q102 (Logic Enhancers)
// Write a Program to take a sorted array arr[] and an integer x as input,
// find the index (0-based) of the smallest element in arr[]
// that is greater than or equal to x and print it.
// This element is called the ceil of x.
// If such an element does not exist, print -1.
//
// In case of multiple occurrences of ceil of x,
// return the index of the first occurrence.
//
// Input 1: arr = [1, 2, 8, 10, 11, 12, 19], x = 5 → Output: 2
// Input 2: arr = [1, 2, 8, 10, 11, 12, 19], x = 20 → Output: -1
// Input 3: arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0 → Output: 0
// Input 4: arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2 → Output: 2


#include <stdio.h>

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x value: ");
    scanf("%d", &x);

    int index = -1;

    // Simple linear search (O(n))
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;  // stop because we need the first element >= x
        }
    }

    printf("%d\n", index);

    return 0;
}

/*
Explanation:
------------
1. We take sorted array and x as input.
2. We loop through array:
      - If arr[i] >= x, that means arr[i] is the "ceil" of x.
      - We print that index and stop (first occurrence).
3. If no element is >= x, we print -1.

Example:
Input:
7
1 2 8 10 11 12 19
5

Output:
2

Because 8 is the first number >= 5 and its index is 2.
*/


// ------------------ OPTIONAL: O(log n) Binary Search Version ------------------

#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    int result = -1; // stores index of ceil

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            result = mid;     // exact match found → x itself is ceil
            right = mid - 1;  // move left to find first occurrence if repeated
        }
        else if (arr[mid] < x) {
            left = mid + 1;   // need larger element
        }
        else {
            result = mid;     // possible ceil found
            right = mid - 1;  // check if smaller ceil exists on left side
        }
    }

    return result;
}

int main_binary() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x value: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);
    printf("%d\n", index);

    return 0;
}

/*
Explanation (Binary Search):
----------------------------
We maintain two pointers: left and right.

1. If arr[mid] == x → we found ceil,
   but still move left to check for first occurrence.
2. If arr[mid] < x → we need a bigger number, so move right.
3. If arr[mid] > x → we found a possible ceil,
   but move left to check if there’s a smaller ceil.

Finally, 'result' stores the smallest index
where arr[index] >= x.

Example:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5

Step-by-step:
- mid = 3 → arr[3] = 10 > 5 → result = 3, move left
- mid = 1 → arr[1] = 2 < 5 → move right
- mid = 2 → arr[2] = 8 > 5 → result = 2, move left
Loop ends → result = 2

Output:
*/