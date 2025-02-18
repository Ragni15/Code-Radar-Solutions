#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("Not Prime\n");
        }
        else{
            printf("Prime\n");
        }
    }
    return 0;
}