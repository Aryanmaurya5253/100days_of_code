// Q40 (Loops without Arrays/Strings)
// Program to find the 1's complement of a binary number


#include <stdio.h>

int main(void) {
    int binaryNumber, onesComplement = 0;
    int digit, place = 1;

    /*
     * 1's Complement:
     * ----------------
     * Flip each bit of a binary number:
     *   0 → 1
     *   1 → 0
     *
     * Example:
     *   Input  : 10110
     *   Output : 01001
     *
     * Steps:
     * 1. Extract last digit using % 10.
     * 2. Flip it (0→1, 1→0).
     * 3. Rebuild result using place values (1, 10, 100,...).
     * 4. Continue until number becomes 0.
     */

    // Input
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    // Process digits
    while (binaryNumber > 0) {
        digit = binaryNumber % 10;          // extract last digit
        digit = (digit == 0) ? 1 : 0;       // flip digit
        onesComplement += digit * place;    // add to result
        place *= 10;                        // shift place
        binaryNumber /= 10;                 // remove last digit
    }

    // Output
    printf("1's Complement = %d\n", onesComplement);

    return 0;
}
