#include<stdio.h>
int main(){
    int n,bal,tr,count=0,in=0,i=0;
    scanf("%d",&n);
    scanf("%d",&bal);
    while(i<n){
        scanf("%d",&tr);
        bal+=tr;
        if (bal<2000&&in==0){
            count++;
            in=1;
        }
        else if(bal>=2000){
            in=0;
        }
        i++;
            
        }
        printf("Final Balance:%d\n",bal);
        printf("Low Balance Days:%d\n",in);
        return 0;
    }
    

