/*
Q98 (Strings)
Print initials of a name with the surname displayed in full.

Input:
Aryan Kumar Maurya

Output:
A K Maurya
*/

#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    // Step 1: Take full name as input
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Step 2: Print first initial
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c ", name[0]);
    }

    // Step 3: Find the second initial and print
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            // Check if next word is last word (surname)
            int j = i + 1;
            int isLast = 1;
            while (name[j] != '\0') {
                if (name[j] == ' ') {
                    isLast = 0; // not last word
                    break;
                }
                j++;
            }
            if (isLast) {
                // Print full surname
                printf("%s", &name[i+1]);
                break;
            } else {
                // Print initial
                printf("%c ", name[i+1]);
            }
        }
        i++;
    }

    return 0;
}

/*
Explanation:
1. Take full name input.
2. Print the first character as first initial.
3. Loop through the name:
   - If a space is found, check if the next word is the last (surname).
   - If it’s the surname, print the full word.
   - Otherwise, print the first letter as initial.
4. Output shows initials of first and middle names and full surname.

Example:
Input: Aryan Kumar Maurya
Output: A K Maurya
*/
