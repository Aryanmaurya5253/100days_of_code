// Q101 (Logic Enhancers)
// Write a Program to take a sorted array (say nums[]) and an integer (say target) as inputs.
// The elements in the sorted array might be repeated. 
// You need to print the first and last occurrence (index) of the target.
// Print -1, -1 if the target is not present.
//
// Example:
// nums = [5,7,7,8,8,10], target = 8  →  Output: 3,4
// nums = [5,7,7,8,8,10], target = 6  →  Output: -1,-1
// nums = [5,7,7,8,8,10], target = 10 →  Output: 5,5
//
// We’ll use Binary Search for O(log n) time complexity.

#include <stdio.h>

// Function to find the FIRST occurrence of target
int findFirst(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1; // store index if found

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            result = mid;        // found target, but keep searching left
            right = mid - 1;
        } 
        else if (arr[mid] < target) {
            left = mid + 1;      // target is on right
        } 
        else {
            right = mid - 1;     // target is on left
        }
    }

    return result; // returns index of first occurrence or -1
}

// Function to find the LAST occurrence of target
int findLast(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            result = mid;        // found target, but keep searching right
            left = mid + 1;
        } 
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    return result; // returns index of last occurrence or -1
}

int main() {
    int n, target;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements (sorted)
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target value
    printf("Enter target value: ");
    scanf("%d", &target);

    // Find first and last positions
    int first = findFirst(arr, n, target);
    int last = findLast(arr, n, target);

    // Output result
    printf("%d,%d\n", first, last);

    return 0;
}

/*
🧠 EXPLANATION:
---------------
We use *binary search* instead of looping through every element.

1️ `findFirst()`:
   - If we find the target, we save that index.
   - But instead of stopping, we move `right = mid - 1` 
     to see if the same value appears earlier.
   - This way, we reach the first occurrence.

2`findLast()`:
   - If we find the target, we save that index.
   - Then we move `left = mid + 1` 
     to check if it appears later.
   - This gives the last occurrence.

 If target is not in array → both functions return `-1`.

 Example:
Array = [5,7,7,8,8,10]
Target = 8

findFirst → finds 8 at index 3 and checks left side → still 8 → stops at 3
findLast  → finds 8 at index 3 and checks right side → finds 8 at 4 → stops at 4

 Output: 3,4

 Time Complexity: O(log n)
 Space Complexity: O(1)
*/
