// Q16 (Conditional Statements)
// Write a program to input three numbers and find the largest among them using if–else.

//fid the largest number in a,b,b
#include <stdio.h>


int main() {
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b); 
    printf("Enter third number:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
      printf("The largest number is a %d\n",a);
    }
    if(b>c && b>a)
    {
      printf("The largest number is b %d\n",b);
    }
    else
    {
      printf("The largest number is c %d\n",c);
    }
     return 0;
}