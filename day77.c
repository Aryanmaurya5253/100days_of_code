#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read from input and convert lowercase to uppercase
    while ((ch = fgetc(inputFile)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, outputFile);
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion complete! Check output.txt\n");

    return 0;
}
