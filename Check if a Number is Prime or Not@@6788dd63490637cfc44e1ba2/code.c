#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d Prime\n", num);
    } else {
        printf("%d Not prime\n", num);
    }
    return 0;
}
