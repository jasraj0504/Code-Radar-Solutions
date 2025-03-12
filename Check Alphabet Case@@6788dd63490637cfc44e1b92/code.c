#include <stdio.h>

int main() {
    char ch;
    
    // Get the character input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } 
     else {
        printf("Lowercase");
    }
    return 0;}

    

