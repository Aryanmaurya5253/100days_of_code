// Q28 (Loops without Arrays/Strings)
// Write a program to print the product of even numbers from 1 to n.
// If the user enters an odd number, they get 3 chances to enter an even number.

#include <stdio.h>

int main() {
    int n, i, product = 1, tries = 0; // variables for limit, counter, product and tries

    // give the user up to 3 chances to enter an even number
    while (tries < 3) {
        printf("Enter an even number: ");
        scanf("%d", &n);

        if (n % 2 == 0) { // check if even
            // using for loop to multiply even numbers from 1 to n
            for (i = 1; i <= n; i++) {
                if (i % 2 == 0) {
                    product = product * i; // multiply to product
                }
            }
            // printing the result
            printf("Product of even numbers from 1 to %d = %d\n", n, product);
            return 0; // exit program after success
        } else {
            printf("Please enter even number\n");
            tries++; // count wrong attempt
        }
    }

    // if all 3 tries are used
    printf("You entered wrong number 3 times. Program terminated.\n");

    return 0; // end of program
}
