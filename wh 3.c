#include <stdio.h>

int main() {
    int n,td,du,sum=0,count=0,rem;
    scanf("%d",&td);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&du);
        sum+=du;
        if(sum<=td)
        count++;
        if(sum>td)
        break;
        i++;
    }
    rem=td-sum;
    printf("Days Used: %d\n",count);
    if(sum>td)
    printf("Remaining Data: 0GB");
    else 
    printf("Remaining Data: %d",rem);
    return 0;
}