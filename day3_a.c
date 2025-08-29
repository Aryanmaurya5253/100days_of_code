// Q5 (User Inputs, Operations & Output)
// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    //we use float because temperature can be in decimal values.

    // Taking input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Converting Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    // The formula to convert Celsius to Fahrenheit is (C * 9/5) + 32

    // Displaying the result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
