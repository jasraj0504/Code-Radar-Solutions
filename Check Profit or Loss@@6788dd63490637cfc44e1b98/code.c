#include<stdio.h>
int main(){
    int p,l;
    scanf("%d",&p);
    scanf("%d",&l);
   
    if(p>l){printf("Profit");}
    else if(p<l){printf("Loss");}
    else{printf("No Profit No Loss");}
return 0;
}