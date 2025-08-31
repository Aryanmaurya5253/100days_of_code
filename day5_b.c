
// Q10 (User Inputs, Operations & Output)
// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>


int main() {
    int total_seconds, hours,minute,seconds;
    printf("Enter time in seconds: ");
    scanf("%d",&total_seconds);
    hours = total_seconds / 3600; // there are 3600 seconds in an hour
    minute = (total_seconds % 3600) / 60; // there are  60 seconds in a minute
    //we use modulus operator to get the remaining seconds after extracting hours.
    seconds = total_seconds % 60; 
    printf("Time in hours:minutes:seconds = %d:%d:%d\n",hours,minute,seconds);
     return 0;
}