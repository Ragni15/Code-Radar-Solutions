#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (b==0){
        printf("Divisor is not allowed with 0");
    }
    else{
        if (a%b==0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}