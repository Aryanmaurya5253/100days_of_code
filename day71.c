#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("info.txt", "w");   // open file in write mode

    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter your name: ");
    gets(name);   // simple input (unsafe but easy for beginners)
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);

    printf("Data saved successfully in info.txt\n");
    return 0;
}
