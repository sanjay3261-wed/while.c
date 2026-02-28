#include<stdio.h>
int main(){
    int n,wallet,pa,count=0,sum=0,sums=0,rem=0;
    scanf("%d",&n);
    scanf("%d",&pa);
    int i=1;
    while(i<=n){
        scanf("%d",&wallet);
        sum=sum+wallet;
        if(sum>pa)
        break;
    
        else 
        sums=sums+wallet;
        count++;
        i++;
    }
    rem=pa-sums;
    printf("Successfull Purchases:%d\n",count);
    printf("Final Balance:%d",rem);
}