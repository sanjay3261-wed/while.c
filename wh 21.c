#include <stdio.h>

int main() {
    int n, vm, count=0,counts=0,max=0;
   scanf("%d",&n);
    int i=1;
    while(i<=n) {
        scanf("%d",&vm);
        if(vm>20) {
            count++;
            counts++;
            if(counts>max) {
                max=counts;
            }
        }
        else {
            counts=0; 
        }
        i++;
    }
    printf("Congestion Minutes: %d\n", count);
    printf("Longest Congestion Streak: %d", max);

    return 0;
}