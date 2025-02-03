#include <stdio.h>
int main(){
    int a,b;
    
    scanf("%d",&a);

    scanf("%d",&b);
    if(a>0 && b<0)||(a==0 && b==0){
        printf("True",a,b);
    }
    else{
        printf("False",a,b);
    }
    return 0;
}