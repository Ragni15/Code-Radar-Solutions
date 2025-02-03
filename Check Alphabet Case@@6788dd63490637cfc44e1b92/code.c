#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if ((a>='A')&&(a<='Z')){
        Printf("Uppercase");
    }
    else if((a>='a')&&(a<='z')){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}