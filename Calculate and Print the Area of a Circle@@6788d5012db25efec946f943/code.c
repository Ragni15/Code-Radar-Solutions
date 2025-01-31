#include <stdio.h>
int main(){
    float radius , area;
    scanf("%f",&radius);
    float PI = 3.14;
    area = PI * radius * radius;
    printf("Area: %.2f\n",area);
    return 0;
}