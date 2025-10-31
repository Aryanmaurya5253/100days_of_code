/*
Q88 (Strings)
Replace spaces with hyphens in a string.

Input:
Hello World Welcome

Output:
Hello-World-Welcome
*/

#include <stdio.h>

int main() {
    char str[100];   // to store the string
    int i = 0;       // loop counter

    printf("Enter a string: ");
    gets(str);  // take input from user

    // Step 1: Go through each character of the string
    while (str[i] != '\0') {
        // Step 2: If a space is found, replace it with a hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    // Step 3: Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}

/*
Explanation:
1. We take the string input from the user.
2. Then we check every character one by one.
3. Whenever we find a space (' '), we replace it with a hyphen ('-').
4. Finally, we print the updated string.

Example:
Input: Hello World Welcome
Step-by-step replacement:
H e l l o _ W o r l d _ W e l c o m e
becomes
H e l l o - W o r l d - W e l c o m e
Output: Hello-World-Welcome
*/
