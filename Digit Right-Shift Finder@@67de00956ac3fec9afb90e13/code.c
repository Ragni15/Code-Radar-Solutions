// Your code here...
#include <stdio.h>
#include <math.h>
int digitRightShift(int N) {
    int temp = N;
    int digits = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    if (digits == 1) {
        return N;
    }    
    int lastDigit = N % 10;
    int remainingNumber = N / 10;
    int shiftedNumber = lastDigit * (int)pow(10, digits - 1) + remainingNumber;
    return shiftedNumber;
}

