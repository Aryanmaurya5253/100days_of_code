// Q35 (Loops without Arrays/Strings)
// Program to print all factors of a given number

#include <stdio.h>

int main()
{
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop through numbers from 1 to num
    for (int i = 1; i <= num; i++)
    {
        // If 'i' divides 'num' completely, then it's a factor
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
