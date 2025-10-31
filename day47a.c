/*
Q93 (Strings)
Check if two strings are anagrams of each other.

Input:
listen
silent

Output:
Anagram

Input:
hello
world

Output:
Not Anagram
*/

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0};  // to store frequency of letters in first string
    int count2[26] = {0};  // to store frequency of letters in second string
    int i;

    // Step 1: Take two strings as input
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Step 2: Count frequency of each lowercase letter in first string
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count1[str1[i] - 'a']++;
        }
    }

    // Step 3: Count frequency of each lowercase letter in second string
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count2[str2[i] - 'a']++;
        }
    }

    // Step 4: Compare both frequency arrays
    int flag = 1; // assume they are anagrams
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 0; // not anagrams
            break;
        }
    }

    // Step 5: Print result
    if (flag)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}

/*
Explanation:
1. Take two strings as input.
2. Count frequency of each lowercase letter (a-z) in both strings using two arrays.
3. Compare the frequency arrays.
4. If all frequencies match, the strings are anagrams.
5. Otherwise, they are not.

Example:
Input: listen, silent
Frequencies: l=1, i=1, s=1, t=1, e=1, n=1 for both
Output: Anagram
*/
