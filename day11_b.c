
// Q22 (Conditional Statements)
// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp; //cp = cost price, sp = selling price
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {//If selling price is greater than cost price then there is a profit.
        printf("Profit: %.2f\n", sp - cp);
        printf("Profit %%: %.2f%%\n", ((sp - cp) / cp) * 100);
        //We use %% to print % symbol in printf function.
        //We use .2% to get decimal upto two digit.
    } 
    else if (cp > sp) {//If cost price is greater than selling price then there is a loss
        printf("Loss: %.2f\n", cp - sp);
        printf("Loss %%: %.2f%%\n", ((cp - sp) / cp) * 100);
    } 
    else {//If cost price is equal to selling price then there is no profit no loss
        printf("No profit no loss.\n");
    }
    return 0;
}
