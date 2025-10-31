/*
Q86 (Strings)
Check if a string is a palindrome.

Input:
madam

Output:
Palindrome

Input:
hello

Output:
Not Palindrome
*/

#include <stdio.h>

int main() {
    char str[100];   // to store the string
    int length = 0;  // to store length of the string
    int i, flag = 0; // flag will check if it's palindrome or not

    printf("Enter a string: ");
    gets(str);  // take string input

    // Step 1: Find length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Step 2: Compare characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1; // if any characters don't match, not palindrome
            break;
        }
    }

    // Step 3: Print result
    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

/*
Explanation:
1. We take a string as input.
2. We find its length manually using a while loop.
3. Then, we check characters from the start and end:
   - str[0] with str[length-1]
   - str[1] with str[length-2]
   and so on.
4. If all pairs match, the string is a palindrome.
   Otherwise, it is not.

Example:
Input: madam
Comparison: m==m, a==a, d==d → all match
Output: Palindrome
*/
