#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char newLine[1000];

    printf("Enter the filename: ");
    scanf("%s", filename); // Get file name

    // Open file in append mode
    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Clear input buffer before fgets()
    getchar();

    printf("Enter the line you want to append: ");
    fgets(newLine, sizeof(newLine), stdin); // Read new line from user

    // Append the new line to the file
    fputs(newLine, file);

    printf("New line appended successfully!\n");

    fclose(file); // Close file
    return 0;
}
