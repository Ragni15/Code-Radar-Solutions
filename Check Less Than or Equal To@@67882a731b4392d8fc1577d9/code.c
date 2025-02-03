#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a <= b){
        printf("True",a,b);
    }
    else{
        printf("False",a,b);
    }
    return 0;
}