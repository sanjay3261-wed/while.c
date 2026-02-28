#include<stdio.h>
int main(){
    int n, i=1,dh,count=0,sum=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&dh);
        sum=sum+dh;
        if(dh>2){
            count++;
        }
        i++;
    }
    printf("Total Delay:%d\n",sum);
    printf(" Delayed Days:%d\n",count);
    return 0;
}