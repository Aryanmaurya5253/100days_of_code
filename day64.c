#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k;
    int len, count, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    // Outer loop to fix starting point of substring
    for (i = 0; i < len; i++) {
        count = 0;

        // Inner loop to check characters from i onward
        for (j = i; j < len; j++) {
            int repeat = 0;

            // Check if s[j] appeared before in this substring
            for (k = i; k < j; k++) {
                if (s[j] == s[k]) {
                    repeat = 1; // found repeating character
                    break;
                }
            }

            // If repeated character found, break the loop
            if (repeat == 1)
                break;

            // Otherwise, increase current substring length
            count++;
        }

        // Update maximum length found so far
        if (count > maxLen)
            maxLen = count;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
