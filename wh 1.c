#include<stdio.h>
int main(){
    int n,db,count=0,violation=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&db);
        if(db>70){
            count++;
        }
        if(violation==0&&db>70)
        violation++;
        else if (db>70&&violation!=0)
        violation++;
        else
        violation=0;
        if(violation>=3)
        break;
        i++;
    }
    printf("Noise Violation:%d\n",count);
    printf("Longest Violation streak:%d",violation);

}