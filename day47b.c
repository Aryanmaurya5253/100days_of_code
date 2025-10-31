/*
Q94 (Strings)
Find the longest word in a sentence.

Input:
I love programming in C

Output:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];   // to store the sentence
    char word[50];   // to store current word
    char longest[50] = "";  // to store the longest word
    int i = 0, j;

    // Step 1: Take sentence input
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // fgets reads spaces

    // Step 2: Loop through sentence word by word
    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' || str[i] == '\n') {
            i++;
        }

        // Step 3: Extract a word
        j = 0;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j] = str[i];
            j++;
            i++;
        }
        word[j] = '\0'; // terminate the word

        // Step 4: Check if this word is longer than current longest
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
    }

    // Step 5: Print the longest word
    printf("Longest word: %s\n", longest);

    return 0;
}

/*
Explanation:
1. Take a sentence input from the user (with spaces).
2. Skip spaces and extract each word one by one.
3. Compare the length of the current word with the longest word found so far.
4. If current word is longer, store it as longest.
5. After checking all words, print the longest word.

Example:
Input: I love programming in C
Words: I, love, programming, in, C
Longest word: programming
Output: programming
*/
