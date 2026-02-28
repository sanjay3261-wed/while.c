#include<stdio.h>
int main(){
    int n,vl,count=0,re=0,ch=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&vl);
        if(vl>70){
        count++;
        ch++;
    }
        else{
            ch=0;
    }
        if(ch==3&&re==0){
            re=i;
    }
    i++;
    }
    if(re==0)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n",re);
        printf("Unsafe Readings: %d",count);
    return 0;
    }