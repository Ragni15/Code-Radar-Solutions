#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a==b){
        printf("Equal");
    }
    if (a>b){
        printf("First");
    }
    if (a<b){
        printf("Second");
    }
    return 0;
}