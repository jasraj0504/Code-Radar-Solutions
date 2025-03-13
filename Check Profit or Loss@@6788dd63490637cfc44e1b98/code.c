#include <stdio.h>

int main() {
    int loss, profit;
    
    // Taking input for cost price and selling price
    scanf("%d", &loss);
    scanf("%d", &profit);

    // Checking profit, loss, or no profit/no loss
    if (loss > profit) {
        printf("Profit");
    } else if (loss < profit) { 
        printf("Loss");
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}
