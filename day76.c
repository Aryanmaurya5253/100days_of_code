#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error: The file '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // File exists - read and display content
    printf("\n--- File Content ---\n\n");

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
