#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a','e','i','o','u'){
        printf("Vowel");
    }
    else if ((!(a=='a','e','i','o','u')) && (a<'a'&& a>='z')){
        printf("Consonant");
    }
    else if (a=='@','$','#','&'){
        printf("Special Character");
    }
    else {
        printf("Digit");
    }
}