#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral");
        } else if (a == b || a == c || b == c) {
            printf("Isosceles");
        } else {
            printf("Scalene");
        }
    } else {
        printf("Not a valid triangle");
    } 
    return 0;
}
