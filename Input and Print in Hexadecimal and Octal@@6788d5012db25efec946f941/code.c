#include <stdio.h>

int main() {
    int num;

    // Asking for user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Printing the number in hexadecimal and octal format
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}
