#include<stdio.h>
int main(){
    int n,fuel,fb,sum=0,sums=0,count=0,rem;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&fb);
        sum+=fb;
        count++;
        if(sum<fuel)
        sums+=fb;
        else
        break;
        i++;
    }
    rem=sum-fuel;
    if(sum>fuel)
    printf("Emergency Stage: %d\n",count);
    else 
    printf("Emergency Stage: No Occurred\n");
    if(sum>fuel)
    printf("Fuel Wasted: %d\n",rem);
    else 
    printf("Fuel Wasted: 0");
    return 0;
    }