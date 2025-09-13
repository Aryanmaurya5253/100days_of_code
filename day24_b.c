// Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>


int main() {
    int i,j,rows;
    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Print pattern
    for(i=1; i<=rows; i++) { // Loop for each row
        for(j=1; j<=i; j++) { // Loop to print numbers in each row
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

     return 0;
}

//The difference between the two files is that day24_b.c prints a pattern of increasing numbers in each row, while day24_a.c prints a pattern of stars.
// justification: The two files implement different patterns using nested loops. Day24_b.c prints a pattern of increasing numbers in each row, while day24_a.c prints a pattern of stars. Both programs take the number of rows as input and use nested loops to generate the desired output. The logic and structure of the code are similar, but the characters printed differ (numbers vs. stars).