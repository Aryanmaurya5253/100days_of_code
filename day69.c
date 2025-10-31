// Q119 (Logic Enhancers)
// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int All = 0;
    int Array = 0;

    printf("Enter %d elements (with one element repeated):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        Array = Array ^ arr[i];
    }

    for (int i = 1; i < n; i++) {
        All = All ^ i;
    }

    int repeated = Array ^ All;
    printf("Repeated element is: %d\n", repeated);

    return 0;
}
