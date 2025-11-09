#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int insideWord = 0; // 0 = outside word, 1 = inside word

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    file = fopen(filename, "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        // Word counting logic
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            insideWord = 0; // space or newline ends a word
        } else if (insideWord == 0) {
            insideWord = 1; // new word starts
            words++;
        }
    }

    fclose(file);
    printf(" characters: %d\n words: %d\n Lines: %d ", characters, words, lines);
    
    return 0;
}
