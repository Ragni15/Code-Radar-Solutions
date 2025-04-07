// Your code here...
#include <stdio.h>
void rotateArray(int arr[], int n, int k) {
    k = k % n; 
    for (int i = 0; i < k; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}
int main() {
    int n, k;
    printf(" ");
    scanf("%d", &n);
    int arr[n];
    printf(" ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf(" ");
    scanf("%d", &k);
    rotateArray(arr, n, k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}