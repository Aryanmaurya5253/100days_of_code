#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "aryan 101 85\n");
    fprintf(file, "ayush 102 90\n");
    fprintf(file, "arpit 103 78\n");

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error!\n");
        return 1;
    }

    char name[50];
    int rollnumber, marks;

    printf("Student Records:\n");

    // Reading each line until EOF
    while (fscanf(file, "%s %d %d", name, &rollnumber, &marks) != EOF) {
        printf("Name: %s, Roll: %d, Marks: %d\n", name, rollnumber, marks);
    }

    fclose(file);

    return 0;
}
