#include <stdio.h>
int a(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (b==0){
        printf("Divisor is not allowed with 0");
    }
    else{
        if (a%b==0){
        printf("Yes",a,b);
        }
        else{
            printf("No",a,b);
        }
    return 0;
}