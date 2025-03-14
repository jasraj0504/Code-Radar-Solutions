#include <stdio.h>

int main() {
    int a, i, x = 0;
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not Prime");
        return 0;
    }

    for (i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            x = 1; 
            break;
        }
    }

    if (x == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
