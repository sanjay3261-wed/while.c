#include <stdio.h>

int main() {
    int n,sf,count=0,counts=0;
    scanf("%d",&n);
    int i=1;
    int lock=0;
    while(i<=n) {
        scanf("%d" &sf);
        if(sf==0) {
            count++;
            counts++;
            if(count==3 && lock==0) {
                lock=i;
            }
        }
        else {
            count=0;
        }
        i++;
    }
    if(lock!=0)
        printf("%d\n",lock);
    else
        printf("Not Locked\n");
        
    printf("%d",counts);

    return 0;
}