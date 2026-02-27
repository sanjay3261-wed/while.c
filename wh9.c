#include <stdio.h>
int main() {
    int n,fuel,pt,sum=0,rem,count=0;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&pt);
        if(sum+pt<=fuel){
        sum+=pt;
        count++;
        }
        else {
        break;
        }
         i++;
    }
    rem=fuel-sum;
    printf("Completed Trips: %d\n",count);
    printf("Remaining Fuel: %d",rem);

    return 0;
}