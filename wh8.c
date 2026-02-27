#include <stdio.h>

int main()
{
   int n,pm,count=0,max=0;
   scanf("%d",&n);
   int i=1;
   while(i<=n){
       scanf("%d",&pm);
       if(pm==0){
           count++;
           if(count>max){
               max=count;
           }
       }
       else {
           count=0;
       }
       i++;
   }
    printf("Longest Default Streak: %d",max);
    return 0;
}