#include<stdio.h>
int main(){
    int n,per,sum=0,count=0,rem;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&per);
        sum=sum+per;
        if(per>4){
            count++;
        }
        i++;
    }
    printf("Total Overtime:%d\n",sum);
    printf("Burnot Days:%d",count);
}