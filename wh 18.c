#include<stdio.h>
int main(){
    int n,ca,hl,count=0,counts=0;
    scanf("%d",&ca);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&hl);
        if(hl<ca)
        count++;
        else if(hl>ca)
         counts++;
        i++;
    }
    printf("Safe Hours:%d\n",count);
    printf("Failure Count :%d",counts);
}