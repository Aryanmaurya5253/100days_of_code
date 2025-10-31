#include <stdio.h>

int main()
{
    int num, sum;
    printf("Enter a positive number :\n");
    scanf("%d", num);

    for (int i = 0; i <= sum; i++)
    {
        if (num != 0)
        {
            num = sum % 10;
            num += sum;
            num = sum / 10;
            printf("number is palindrome %d");
        }
        else
        {
            printf("number is not palindrome");
        }
    }

   
    return 0;
}