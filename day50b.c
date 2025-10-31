/*
Q100 (Strings)
Print all substrings of a string.

Input:
ABC

Output:
A
AB
ABC
B
BC
C
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;
    int length;

    // Step 1: Take string input
    printf("Enter a string: ");
    gets(str);

    // Step 2: Find length of string
    length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Step 3: Generate all substrings
    for (i = 0; i < length; i++) {       // starting index
        for (j = i; j < length; j++) {   // ending index
            // print characters from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); // new line for next substring
        }
    }

    return 0;
}

/*
Explanation:
1. Take a string as input from the user.
2. Find its length manually.
3. Use three nested loops:
   - Outer loop i: starting index of substring
   - Middle loop j: ending index of substring
   - Inner loop k: prints characters from i to j
4. Print each substring on a new line.

Example:
Input: ABC
Substrings:
A
AB
ABC
B
BC
C
Output: printed line by line
*/
