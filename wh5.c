#include <stdio.h>
int main() {
    int n,sc,count=0,counts=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&sc);
        if(sc==1)
        count++;
        else if(sc==0)
        counts++;
        i++;
    }
    printf("Successful: %d\n",count);
    printf("Cancelled: %d\n",counts);
    if(count>=counts)
    printf("Status: Safe");
    else
    printf("Status: Risk");
    
    return 0;
}