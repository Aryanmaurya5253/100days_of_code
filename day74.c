#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceName[100], destName[100];
    char ch;

    // Ask user for file names
    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    // Open source file in read mode
    sourceFile = fopen(sourceName, "r");

    if (sourceFile == NULL) {
        printf("Error! Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destinationFile = fopen(destName, "w");

    if (destinationFile == NULL) {
        printf("Error! Cannot create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("\nFile copied successfully!\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
