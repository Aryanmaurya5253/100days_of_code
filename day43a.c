/*
Q85 (Strings)
Reverse a string.

Input:
Hello

Output:
olleH
*/

#include <stdio.h>

int main() {
    char str[100];   // to store the string
    int length = 0;  // to store length of the string
    int i;

    printf("Enter a string: ");
    gets(str);  // taking input from user

    // Step 1: Find the length of the string manually
    while (str[length] != '\0') {
        length++;   // count characters until end of string
    }

    // Step 2: Print the string in reverse order
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);  // print each character from end to start
    }

    printf("\n");
    return 0;
}

/*
Explanation:
1. We take a string as input from the user.
2. We calculate its length using a while loop until we reach '\0' (end of string).
3. Then, we use a for loop to print the characters in reverse order.
4. This way, the output becomes the reverse of the input string.

Example:
Input: Hello
Length = 5
Printed backwards: olleH
Output: olleH
*/
