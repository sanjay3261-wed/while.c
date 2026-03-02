#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=n-1;i>=0;i--){
        for(int j=i;j<n;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}