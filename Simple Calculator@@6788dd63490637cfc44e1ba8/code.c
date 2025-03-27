#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &c);  // Note the space before %c to ignore newline

    if (c == '+') {
        printf("%d", a + b);
    } else if (c == '-') {
        printf("%d", a - b);
    } else if (c == '*') {
        printf("%d", a * b);
    } else if (c == '/') {
        if (b == 0) {
            printf("Error: Division by zero");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("Invalid operator");
    }

    return 0;
}







