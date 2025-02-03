#include <stdio.h>
int main(){
    char name[50] , hobby[50];
    int age;
    scanf("%49s",&name);
    scanf("%d",&age);
    scanf("%49s",&hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}