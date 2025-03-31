// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n+64;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}