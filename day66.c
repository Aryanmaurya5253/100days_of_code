#include <stdio.h>   // header file for input and output functions

int main() {
    int n, target, i, j, found = 0;  
    // n → size of array
    // target → number we want to find sum for
    // i, j → loop counters
    // found → flag to check if pair is found (0 = not found, 1 = found)

    // Step 1: Take input for array size
    printf("Enter size of array: ");
    scanf("%d", &n);   // user enters number of elements

    int nums[n];   // declaring array of size n

    // Step 2: Take array elements as input
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);   // store each input number into array
    }

    // Step 3: Take input for target value
    printf("Enter target: ");
    scanf("%d", &target);   // user enters target sum value

    // Step 4: Find two indices (i, j) whose elements add up to target
    for (i = 0; i < n; i++) {           // loop through first element
        for (j = i + 1; j < n; j++) {   // loop through second element (after i)
            
            // check if the sum of two numbers equals the target
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);  // print their indices
                found = 1;                // mark that pair is found
                break;                    // exit inner loop
            }
        }

        if (found)    // if pair already found, stop outer loop too
            break;
    }

    // Step 5: If no such pair found, print "-1 -1"
    if (!found)
        printf("-1 -1\n");

    return 0;   // program ends successfully
}
