// Q9 (User Inputs, Operations & Output)
// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main()
{
    // the formula for simple interest is SI = (P * R * T) / 100
    float principal, rate, time, simple_interest, compound_interest;\
    //fisrt we declare the variable as a name of principal, rate, time, simple_interest, compound_interest
    // P = principal amount
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    // R = rate of interest this will calc in percentage
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    // T = time in years
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    //the formula for compound interest is CI = P * (1 + R/100)^T

    compound_interest = principal * ((1 + rate / 100), time)- principal;
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}