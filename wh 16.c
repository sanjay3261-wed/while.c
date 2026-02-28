#include<stdio.h>
int main(){
    int n,mw,pw,sum=0,count=0,max;
    scanf("%d",&mw);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&pw);
        sum=sum+pw;
        if(sum<mw)
            count++;
        
        i++;
    }
    printf("People Enter:%d\n",count);
    if(mw<sum){
        printf("Overload Status:Yes");
    }
    else if(mw>sum){
        printf("Overload Status:No");
    }
    return 0;
} 