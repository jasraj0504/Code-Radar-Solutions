#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=b%a==0;
    if(a==c){
        printf("Yes");
    }
    else{
        printf("No");
    }
return 0;}