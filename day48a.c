/*
Q95 (Strings)
Check if one string is a rotation of another.

Input:
hello
lohel

Output:
Rotation

Input:
hello
helol

Output:
Not Rotation
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char temp[200]; // to store concatenated string

    // Step 1: Take two strings as input
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Step 2: Check if lengths are same
    if (strlen(str1) != strlen(str2)) {
        printf("Not Rotation\n");
        return 0;
    }

    // Step 3: Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Step 4: Check if str2 is a substring of concatenated string
    if (strstr(temp, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not Rotation\n");
    }

    return 0;
}

/*
Explanation:
1. Take two strings as input.
2. If lengths are different, they cannot be rotations.
3. Concatenate the first string with itself.
*/