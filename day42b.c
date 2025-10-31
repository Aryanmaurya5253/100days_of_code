#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    gets(str);

    while (str[i] != '\0') {
        // convert lowercase to uppercase manually
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // difference between 'a' and 'A' in ASCII
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
