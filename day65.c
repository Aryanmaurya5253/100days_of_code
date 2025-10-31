#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];   // strings to store user input
    int i, j, len1, len2, found;

    // Step 1: Take first string as input
    printf("Enter first string: ");
    scanf("%s", s);

    // Step 2: Take second string as input
    printf("Enter second string: ");
    scanf("%s", t);

    // Step 3: Find lengths of both strings
    len1 = strlen(s);
    len2 = strlen(t);

    // Step 4: If lengths are not same → not anagrams
    if (len1 != len2) {
        printf("Not Anagram");
        return 0;   // stop program
    }

    // Step 5: Check every character of s in t
    for (i = 0; i < len1; i++) {
        found = 0;  // reset flag for each character

        // Step 6: Search s[i] in string t
        for (j = 0; j < len2; j++) {
            if (s[i] == t[j]) {   // if character found
                t[j] = '0';       // mark it as used so it isn’t matched again
                found = 1;        // mark that match was found
                break;            // break inner loop
            }
        }

        // Step 7: If character not found in t → not anagram
        if (!found) {
            printf("Not Anagram");
            return 0;
        }
    }

    // Step 8: If all characters matched successfully → they are anagrams
    printf("Anagram");
    return 0;   // end of program
}
// Same letters + same number of times → Anagram