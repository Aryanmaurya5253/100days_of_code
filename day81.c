#include <stdio.h>

enum Days {
    SUNDAY,     // 0
    MONDAY,     // 1
    TUESDAY,    // 2
    WEDNESDAY,  // 3
    THURSDAY,   // 4
    FRIDAY,     // 5
    SATURDAY    // 6
};

int main() {
    enum Days day;

    printf("Days of the week:\n");

    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("Day %d\n", day);
    }

    return 0;
}
