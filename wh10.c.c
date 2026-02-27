#include <stdio.h>
int main() {
    int n,pw,count=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&pw);
        if(pw==0)
        count++;
        i++;
    }
    printf("Inactive Weeks: %d\n",count);
    if(count>=3)
    printf("Risk Status: High ");
    else
    printf("Risk Status: Low");

    return 0;
}