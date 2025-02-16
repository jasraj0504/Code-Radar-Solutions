#include <stdio.h>

int main() {
    int a = 0, b = 0; // Initialize the variables
    
    scanf("%d %d", &a, &b); // Take input from the user

    if(a > 0)
        printf("True\n"); // Print True if a is greater than 0
    else
        printf("False\n"); // Print False otherwise

    return 0;
}
