#include <stdio.h>
int main() {
    unsigned int number;
    scanf("%u", &number);
    unsigned int msb_mask = 1 << 31; 
   if (number & msb_mask) {
        printf("Set\n"); 
    } else {
        printf("Not Set\n"); 
    }

    return 0;
}
