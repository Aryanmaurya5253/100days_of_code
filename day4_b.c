// Q8 (User Inputs, Operations & Output)
// Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    int n, sum = 0; // First we declare the variable as a name of n and sum
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i; // sum = sum + i
        // we use
    }
    // Here we use for loop to iterate from 1 to n and add each number to sum.
    // we use loop to get the sum of first n natural numbers.
    // And we use for loop because we know the number of iterations in advance.
    printf("The sum of the first %d natural numbers is %d\n", n, sum);
    return 0;
}