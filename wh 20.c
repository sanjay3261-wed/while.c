#include <stdio.h>

int main() {
    int n,dv,counts=0,count=0,temp;
    scanf("%d",&n);

    int i=1;
    int crashDay=-1;
    scanf("%d",&temp);   
    i = 2;
    while(i <= n) {
        scanf("%d",&dv);
        if(dv<temp) {
            count++;
            counts++;      
            if(count==3 && crashDay==-1) {
                crashDay=i;   
            }
        }
        else {
            count=0;
        }
        temp=dv;
        i++;
    }
    if(crashDay != -1)
        printf("Crash Day: %d\n", crashDay);
    else
        printf("Crash Day: Not Detected\n");

    printf("Total Drops: %d", counts);

    return 0;
}