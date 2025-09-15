// 52 (Nested Loops without Arrays/Strings)
// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *
#include <stdio.h>

int main() {
    int i, j;

    // Upper half (1, 3, 5 stars)
    for (i = 1; i <= 5; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*\n"); // print star in new line
        }
        printf("\n"); // blank line between groups
    }

    // Lower half (3, 1 stars)
    for (i = 3; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        if(i > 1)  // avoid extra line at very end
            printf("\n");
    }

    return 0;
}
