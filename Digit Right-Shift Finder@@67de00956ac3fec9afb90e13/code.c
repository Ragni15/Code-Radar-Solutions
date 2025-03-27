// Your code here...
#include <stdio.h>
#include <math.h>

int digitRightShift(int N) {
    // Count the number of digits in N
    int temp = N;
    int digits = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // If N has only one digit, the result is the same as N
    if (digits == 1) {
        return N;
    }

    // Calculate the last digit and remove it from N
    int lastDigit = N % 10;
    int remainingNumber = N / 10;

    // Create the shifted number by placing the last digit at the front
    int shiftedNumber = lastDigit * (int)pow(10, digits - 1) + remainingNumber;

    return shiftedNumber;
}

int main() {
    int N;
    scanf("%d", &N);

    // Call the digitRightShift function
    int shiftedNumber = digitRightShift(N);

    // Output the shifted number
    printf("%d\n", shiftedNumber);

    return 0;
}