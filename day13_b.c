// Q26 (Loops without Arrays/Strings)
// Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i; // variable to store limit and counter

    // asking the user to enter the limit
    printf("Enter a number: ");
    scanf("%d", &n);

    // using for loop to print numbers from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d\n", i); // printing the number
    }

    return 0; 
}
//This is the basic use of loop in an we mostly use for loop because in for loop we only have to define i only one time.