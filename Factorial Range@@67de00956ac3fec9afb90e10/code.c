// Your code here...
#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    }
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print factorials in the given range
void factorialRange(int start, int end) {
    if (start > end || start < 0 || end < 0) {
        printf("Invalid range\n");
        return;
    }
    for (int i = start; i <= end; i++) {
        printf("%lld\n", factorial(i));
    }
}
