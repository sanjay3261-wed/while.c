#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        int row=i;
        if(i>n)
            row=2*n-i;
        k=n;
        for(int j=1;j<=2*n-1;j++){
            printf("%d ",k);
            if(j<row)
                k--;
            else if(j>=row && j<(2*n-row))
                k=k;
            else
                k++;
        }
        printf("\n");
    }
    return 0;
}