/*
Q90 (Strings)
Toggle case of each character in a string.

Input:
Hello World

Output:
hELLO wORLD
*/

#include <stdio.h>

int main() {
    char str[100];   // to store the string
    int i = 0;       // loop counter

    // Step 1: Take string input
    printf("Enter a string: ");
    gets(str);

    // Step 2: Loop through each character
    while (str[i] != '\0') {
        // If character is uppercase, convert to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        // If character is lowercase, convert to uppercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Step 3: Print the modified string
    printf("Toggled string: %s\n", str);

    return 0;
}

/*
Explanation:
1. Take string input from the user.
2. Loop through each character.
3. For uppercase letters (A-Z), add 32 to convert to lowercase.
4. For lowercase letters (a-z), subtract 32 to convert to uppercase.
5. Print the final string after toggling the case.

Example:
Input: Hello World
Step-by-step toggling:
H → h, e → E, l → L, l → L, o → O, space remains, W → w, o → O, r → R, l → L, d → D
Output: hELLO wORLD
*/
