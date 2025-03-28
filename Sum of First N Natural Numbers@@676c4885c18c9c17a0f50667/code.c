#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i = n*(n+1)){
        printf("%d",i);
    }
    return 0;
}