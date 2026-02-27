#include <stdio.h>

int main() {
    int n,cp,ad,sum=0,count=0;
    scanf("%d",&cp);
    scanf("%d",&n);
    int i=1;
    while(i<=n) {
        scanf("%d",&ad);
        sum=sum+ad;
        if(sum>cp) {
            sum=cp;
        }
        if(sum<0) {
            sum=0;
        }
        if(sum>(cp*90)/100) {
            count++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n",sum);
    printf("Critical Hours: %d",count);
    return 0;
}