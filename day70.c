// Q120 (Logic Enhancers)
// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int newSentence = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            newSentence = 1;
    }

    printf("Sentence case: %s", str);
    return 0;
}
