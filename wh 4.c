#include <stdio.h>
int main() {
    int n,wf,count=0,temp=0,i=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&wf);
        if(wf==0) {
            count++;               
            if(count>temp) {
                temp=count;  
            }
        }
        else {
            count=0;             
        }
        i++;
    }
    printf("%d",temp);
    return 0;
}