/*
Q91 (Strings)
Remove all vowels from a string.

Input:
Hello World

Output:
Hll Wrld
*/

#include <stdio.h>

int main() {
    char str[100];   // to store input string
    char result[100]; // to store string after removing vowels
    int i = 0, j = 0; // i for input string, j for result string

    // Step 1: Take string input
    printf("Enter a string: ");
    gets(str);

    // Step 2: Loop through each character
    while (str[i] != '\0') {
        char ch = str[i];
        // Check if character is not a vowel
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
              ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {
            result[j] = ch; // add non-vowel character to result
            j++;
        }
        i++;
    }

    result[j] = '\0'; // terminate the result string

    // Step 3: Print the final string without vowels
    printf("String after removing vowels: %s\n", result);

    return 0;
}

/*
Explanation:
1. Take a string input from the user.
2. Loop through each character in the string.
3. If the character is a vowel (a, e, i, o, u in upper or lower case), skip it.
4. If not a vowel, add it to a new string.
5. Finally, terminate the new string with '\0' and print it.

Example:
Input: Hello World
Remove vowels: e, o, o
Result: Hll Wrld
Output: Hll Wrld
*/
