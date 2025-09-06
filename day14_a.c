// Q27 (Loops without Arrays/Strings)
// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0; // variables for limit, counter and sum

    // asking the user to enter the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // using for loop to add first n odd numbers
    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1); // formula for ith odd number
    }

    // printing the result
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0; 
}


// Explanation:

// The for loop is used here to repeat the addition process from i = 1 up to i = n.

// In each step of the loop:

// The expression (2 * i - 1) generates the i-th odd number.

// For i = 1 → 1

// For i = 2 → 3

// For i = 3 → 5 … and so on.

// The loop then adds these numbers one by one to the variable sum.

// After the loop finishes, sum contains the total of the first n odd numbers.

// 👉 In short: The for loop automates the repeated addition of odd numbers, so you don’t have to manually write separate statements for each odd number.
