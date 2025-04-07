#include <stdio.h>
int findFirstPeak(int arr[], int n) {
    if (n == 1) {
        return arr[0]; 
    }
    for (int i = 0; i < n; i++) {
        if (i == 0 && arr[i] > arr[i + 1]) { 
            return arr[i];
        }
        if (i == n - 1 && arr[i] > arr[i - 1]) { 
            return arr[i];
        }
        if (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; 
        }
    }
    return -1; 
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int peak = findFirstPeak(arr, n);
    printf("The first peak element is: %d\n", peak);
    return 0;
}