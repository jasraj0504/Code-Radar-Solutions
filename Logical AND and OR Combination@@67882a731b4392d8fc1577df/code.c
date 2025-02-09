#include <stdio.h>

int main() {
    int a = 1, b = -1; 

    if (a > 0 && b < 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    if (a > 0 || b < 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
