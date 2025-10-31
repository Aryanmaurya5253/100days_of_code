/*
Q92 (Strings)
Find the first repeating lowercase alphabet in a string.

Input:
programming

Output:
r
*/

#include <stdio.h>

int main() {
    char str[100];   // to store input string
    int i, j;
    int found = 0;   // flag to indicate first repeating character

    // Step 1: Take string input
    printf("Enter a string: ");
    gets(str);

    // Step 2: Loop through each character
    for (i = 0; str[i] != '\0'; i++) {
        // Only consider lowercase letters
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Compare with all characters after current position
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {
                    printf("First repeating lowercase character: %c\n", str[i]);
                    found = 1;
                    break; // stop after finding first repeating character
                }
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("No repeating lowercase character found\n");
    }

    return 0;
}

/*
Explanation:
1. Take string input from the user.
2. Loop through each character.
3. Only check lowercase letters (a-z).
4. For each character, compare it with all characters that come after it.
5. If a match is found, print it and stop.
6. If no repeating character is found, display a message.

Example:
*/