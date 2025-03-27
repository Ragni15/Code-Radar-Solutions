#include <stdio.h>
int nextPrimeDigit(int digit) {
    switch (digit) {
        case 0:
        case 1:
        case 8:
        case 9:
            return 2;
        case 2:
        case 3:
        case 4:
            return 3;
        case 5:
        case 6:
        case 7:
            return 7;
        default:
            return -1; 
    }
}
int incrementToPrimeDigits(int N) {
    int result = 0, multiplier = 1;
    while (N > 0) {
        int digit = N % 10; 
        int primeDigit = nextPrimeDigit(digit); 
        result += primeDigit * multiplier;
        multiplier *= 10; 
        N /= 10; 
    }
    return result;
}
