#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input for cost price and selling price
    scanf("%d", &a);
    scanf("%d", &b);

    // Checking profit, loss, or no profit/no loss
    if (a > b) {
        printf("Profit");
    } else if (a < b) { 
        printf("Loss");
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}
