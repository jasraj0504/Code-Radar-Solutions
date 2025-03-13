#include <stdio.h>
#include <ctype.h>

void checkCharacterType(char ch) {
    if (isalpha(ch)) {  
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }
}

int main() {
    char ch;
    scanf("%c", &ch);
  checkCharacterType(ch);
    
    return 0;
}
