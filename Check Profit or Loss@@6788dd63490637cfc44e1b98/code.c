#include <stdio.h>

int main() {
    int p, l;
    
    // Taking input for cost price and selling price
    scanf("%d", &p);
    scanf("%d", &l);

    // Checking profit, loss, or no profit/no loss
    if (p > l) {
        printf("Profit");
    } else if (p < l) { 
        printf("Loss");
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}
