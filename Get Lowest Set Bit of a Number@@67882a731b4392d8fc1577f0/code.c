#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c= a^(1>>b);
    printf("%d",c);
return 0;
}