#include <stdio.h>

int main() {
    int loss, profit;
    
    
    scanf("%d", &loss);
    scanf("%d", &profit);


    if (loss > profit) {
        printf("Loss");
    } else if (loss < profit) { 
        printf("Profit");
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}
