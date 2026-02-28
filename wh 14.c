#include<stdio.h>
int main(){
    int n,atm,cash,sum=0,count=0,rem,sums=0;
    scanf("%d",&atm);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&cash);
        sum=sum+cash;
        if(sum>atm){
            break;
        }
        else
        sums+=cash;
        count++;
        i++;
    }
    rem=atm-sums;
    printf("Successful Withdrawals:%d\n",count);
    printf("Remaining Cash:%d",rem);
}
    