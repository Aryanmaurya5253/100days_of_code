#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);  // simple input (for beginners)

    // loop runs until '\0' is found (end of string)
    while (str[i] != '\0') {
        i++;
    }

    printf("%d\n", i);  // print total count of characters

    return 0;
}
