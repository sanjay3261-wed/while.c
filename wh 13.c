#include<stdio.h>
int main(){
    int n,gb,dd,sum=0,count=0,rem;
    scanf("%d",&gb);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&dd);
        sum=sum+dd;
        count++;
        if(sum>gb)
            break;
        
        i++;
    }
    rem=sum-gb;
    printf("Exhausted Days:%d\n",count);
    printf("Overused Data:%d",rem);
}
    