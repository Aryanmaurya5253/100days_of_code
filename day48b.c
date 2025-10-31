/*
Q96 (Strings)
Reverse each word in a sentence without changing word order.

Input:
Hello World

Output:
olleH dlroW
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];   // to store the sentence
    int i = 0, start, end;

    // Step 1: Take sentence input
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Step 2: Loop through each word
    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' || str[i] == '\n') {
            i++;
        }
        start = i; // start index of word

        // Find end of the word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        end = i - 1; // end index of word

        // Step 3: Reverse the current word in place
        int s = start, e = end;
        while (s < e) {
            char temp = str[s];
            str[s] = str[e];
            str[e] = temp;
            s++;
            e--;
        }
    }

    // Step 4: Print the sentence with reversed words
    printf("Sentence after reversing each word: %s\n", str);

    return 0;
}

/*
Explanation:
1. Take a sentence as input.
2. Loop through each character.
3. Identify the start and end index of each word (words are separated by spaces).
4. Reverse each word in place using a simple swap technique.
5. Print the final sentence where words are reversed but the order of words remains same.

Example:
Input: Hello World
First word: Hello → olleH
Second word: World → dlroW
Output: olleH dlroW
*/
