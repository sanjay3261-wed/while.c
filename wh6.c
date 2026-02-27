#include <stdio.h>
int main() {
    int n,mw,we,sum=0,count=0;
    scanf("%d",&mw);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&we);
        sum+=we;
        if(sum>mw)
        break;
        else
        count++;
        i++;
    }
    printf("%d\n",count);
    if(sum>mw)
    printf("Yes");
    else
    printf("No");
    
    return 0;
}