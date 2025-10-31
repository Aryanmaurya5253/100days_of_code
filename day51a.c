// Q101 (Logic Enhancers)
// Write a Program to take a sorted array (say nums[]) and an integer (say target) as inputs.
// The elements in the sorted array might be repeated. 
// You need to print the first and last occurrence of the target and print the index of first and last occurrence.
// Print -1, -1 if the target is not present.
//
// Input 1:
// nums = [5,7,7,8,8,10], target = 8
// Output 1:
// 3,4
//
// Input 2:
// nums = [5,7,7,8,8,10], target = 6
// Output 2:
// -1,-1
//
// Input 3:
// nums = [5,7,7,8,8,10], target = 10
// Output 3:
// 5,5
//
// Follow-up(optional): Can you do it in O(log n) Time Complexity?

#include <stdio.h>

int main() {
    int n, target, i;
    
    // Taking size of array from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Taking array elements
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Taking target value
    printf("Enter target value: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Loop to find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;  // store first occurrence index
            }
            last = i;  // store last occurrence index
        }
    }

    // Print results
    printf("%d,%d\n", first, last);

    return 0;
}

/*
Explanation:
------------
1. We take a sorted array as input from the user.
2. We take a target number.
3. We loop through the array to check where the target appears.
4. 'first' stores the first index when target appears.
5. 'last' keeps updating until we reach the last occurrence.
6. If target is not found, both 'first' and 'last' remain -1.
7. Finally, print both indices as required.

Example:
Input:
6
5 7 7 8 8 10
8

Output:
3,4
*/
