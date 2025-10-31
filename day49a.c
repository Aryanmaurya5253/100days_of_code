/*
Q97 (Strings)
Print the initials of a name.

Input:
Aryan Kumar Maurya

Output:
AKM
*/

#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    // Step 1: Take full name as input
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // Step 2: Print first character of the name
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }

    // Step 3: Loop through each character
    while (name[i] != '\0') {
        // If previous character is a space, print current character as initial
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c", name[i+1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}

/*
Explanation:
1. Take the full name as input.
2. Print the first letter of the name as the first initial.
3. Loop through the name; whenever a space is found, print the next character (next initial).
4. Ignore extra spaces or newline characters.
5. This prints the initials of all words in the name.

Example:
Input: Aryan Kumar Maurya
Output: AKM
*/
