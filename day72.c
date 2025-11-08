#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("info.txt", "r");   // open file in read mode

    if (file == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    printf("Contents of info.txt:\n\n");

    // Read each line until EOF (end of file)
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // print each line to console
    }

    fclose(file);  // close the file
    return 0;
}
