// Q15 (Conditional Statements)
// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


 #include <stdio.h>

int main() {
    char ch; // single character

    printf("Enter a character: ");
    scanf("%c", &ch); // read a single character

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);//in this we check if the character is between A to Z
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);// in this we check if the character is between a to z
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);// in this we check if the character is between 0 to 9
    } else {
        printf("%c is a special character.\n", ch);// if the character is not in the above three categories then it is a special character
    }

    return 0;
}
// In this program, we use if-else statements to check the ASCII values of the input character to determine whether it is an uppercase alphabet (A-Z), lowercase alphabet (a-z), digit (0-9), or a special character (anything else). The program reads a single character input and evaluates it against the specified ranges.