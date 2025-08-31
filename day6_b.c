// Q12 (Conditional Statements)
// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>


int main() {
    int number; //define a variable as a name of number
    printf("Enter an integer: ");
    scanf("%d",&number);

    if (number > 0) // we use if statement to check if the number is greater than 0
    {
        printf("%d is positive.\n",number); // if the number is greater than 0 then it is positive
    }
    else if (number < 0) // we use else if statement to check if the number is less than 0
    {
        printf("%d is negative.\n",number); // if the number is less than 0 then it is negative 
    }
    else // if the number is neither greater than 0 nor less than 0 then it is 0
    {
        printf("The number is zero.\n");    
    }
     return 0;
}

//In this program, we use nested if-else statements to check whether the input integer is positive, negative, or zero. The program first checks if the number is greater than zero, then checks if it is less than zero, and finally defaults to zero if neither condition is met.