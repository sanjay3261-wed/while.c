#include<stdio.h>
int main(){
    int n, i=1,kw,count=0,max=0;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&kw);
        if(max<kw){
            max=kw;
        }
        if(kw>5){
            count++;
        }
        i++;
    }
    printf("Max Usage:%d\n",max);
    printf("surge Hours:%d\n",count);
    return 0;
}