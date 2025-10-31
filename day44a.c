/*
Q87 (Strings)
Count spaces, digits, and special characters in a string.

Input:
Hello 123 !

Output:
Spaces: 2
Digits: 3
Special Characters: 1
*/

#include <stdio.h>

int main() {
    char str[100];          // to store the string
    int i = 0;              // loop counter
    int spaces = 0;         // to count spaces
    int digits = 0;         // to count digits
    int special = 0;        // to count special characters

    printf("Enter a string: ");
    gets(str);  // take string input

    // Step 1: Go through each character in the string
    while (str[i] != '\0') {
        // Check for space
        if (str[i] == ' ') {
            spaces++;
        }
        // Check for digits (0-9)
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // Check for special characters (not letters, not digits, not space)
        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z'))) {
            special++;
        }
        i++;
    }

    // Step 2: Print the results
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}

/*
Explanation:
1. We take the string input from the user.
2. We check each character one by one:
   - If it is a space (' '), increase the spaces count.
   - If it is a digit (between '0' and '9'), increase the digits count.
   - If it is not a letter or digit or space, it must be a special character.
3. At the end, we print the counts of spaces, digits, and special characters.

Example:
Input: Hello 123 !
Characters:
H e l l o _ 1 2 3 _ !
Spaces = 2, Digits = 3, Special = 1
Output:
Spaces: 2
Digits: 3
Special Characters: 1
*/
