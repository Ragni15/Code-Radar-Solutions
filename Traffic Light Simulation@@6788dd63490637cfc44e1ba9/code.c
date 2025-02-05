#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (a='R'){
        prinf("Stop");
    }
    else if (a='G'){
        printf("Go");
    }
    else if (a='Y'){
        printf("Slow Down");
    }
    else {
        printf("Invalid output");
    }
    return 0;
}