#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int bit_value = (a>>b) &1;
    printf("%d",a,b,bit_value);
    return 0;


}