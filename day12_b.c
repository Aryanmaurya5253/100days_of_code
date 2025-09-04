// Q24 (Conditional Statements)
// Write a program to calculate electricity bill based on units consumed with these rates:
// First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// Above at ₹12/unit

#include <stdio.h>

int main() {
    int units;   // Variable to store the number of units consumed
    int bill = 0; // Variable to store the total bill amount

    // Ask user to input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Check for invalid input (negative or zero units)
    if (units <= 0) {
        printf("Invalid input. Units must be positive.\n");
    }
    // If units are 1 to 100
    else if (units <= 100) {
        bill = units * 5; // Rate ₹5 per unit
    }
    // If units are 101 to 200
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7); // First 100 units at ₹5, remaining at ₹7
    }
    // If units are 201 to 300
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10); // First 100 at ₹5, next 100 at ₹7, remaining at ₹10
    }
    // If units are above 300
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12); // First 100 at ₹5, next 100 at ₹7, next 100 at ₹10, remaining at ₹12
    }

    // Print the bill amount if units are positive
    if (units > 0) {
        printf("Electricity Bill = %d\n", bill);
    }

    return 0; // End of program
}
