#include <stdio.h>

int main() {
    int a, b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a==&&b==c){printf("Equilateral");}
    else if(a=b!=c||a=c!=b||b=c!=a){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    
    return 0;
}