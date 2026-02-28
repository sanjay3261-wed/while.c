#include<stdio.h>
int main(){
    int n,ta,count=0,counts=0,ft=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&ta);
        if(ta>=50000)
        count++;
        if(ta>=50000)
        counts++;
        else 
        counts=0;
        if(counts==3 && ft==0)
        ft=i;
        
        i++;
    }
    if(ft!=0)
    printf("Fraud Triggered At Attempt: %d\n",ft);
    else 
    printf("Fraud Triggered At Attempt: No Triggered\n");
    printf("High-Value Transactions: %d",count);
    return 0;
    }