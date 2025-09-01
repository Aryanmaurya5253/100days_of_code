// Q14 (Conditional Statements)
// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main()
{
    char ch[20]; // array to store input

    printf("Enter a character: ");
    scanf("%s", ch); // read input as a string

    if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] == 'u' ||
        ch[0] == 'A' || ch[0] == 'E' || ch[0] == 'I' || ch[0] == 'O' || ch[0] == 'U')
    {
        printf("%c is a vowel.\n", ch[0]);
    }
    else
    {
        printf("%c is a consonant.\n", ch[0]);
    }

    return 0;
}
