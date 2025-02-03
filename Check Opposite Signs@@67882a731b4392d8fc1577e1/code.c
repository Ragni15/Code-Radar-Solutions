#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if ((a>0 && b<0)||(a<0 && b>0)){
        printf("True",a,b);
    }
    else{
        printf("False",a,b);
    }
    return 0;

}