/*
Q89 (Strings)
Count frequency of a given character in a string.

Input:
Hello World
Character to count: l

Output:
Frequency of 'l' = 3
*/

#include <stdio.h>

int main() {
    char str[100];   // to store the string
    char ch;         // character to count
    int i = 0;       // loop counter
    int count = 0;   // to store frequency

    // Step 1: Take string input
    printf("Enter a string: ");
    gets(str);

    // Step 2: Take the character to count
    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Step 3: Loop through the string to count occurrences
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    // Step 4: Print the frequency
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}

/*
Explanation:
1. We take a string as input from the user.
2. Then we take the character whose frequency we want to count.
3. We go through the string one character at a time.
4. If a character matches the given character, we increase the count by 1.
5. Finally, we print the count.

Example:
Input string: Hello World
Character: l
Occurrences: l, l, l → count = 3
Output: Frequency of 'l' = 3
*/
