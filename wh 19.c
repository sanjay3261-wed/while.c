#include<stdio.h>
int main(){
    int n,maxc,pa,count=0,max=0,rem,sum=0;
    scanf("%d",&maxc);
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        scanf("%d",&pa);
        sum+=pa;
        i++;
    }
    rem=sum-maxc;
    if(sum>maxc){
    printf("Treated Patients:%d\n",maxc);
    printf("Rejected Patients :%d",rem);
    }
    else{
        printf("Treated Patients:%d\n",sum);
        printf("Rejected Patients:0");
    }
    return 0;
}