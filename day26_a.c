#include <stdio.h>

int main() {
    int i, j;

    // Loop for rows (from 1 to 5)
    for(i = 5; i >= 1; i--) {
        // Loop for columns (print numbers from i to 5)
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
