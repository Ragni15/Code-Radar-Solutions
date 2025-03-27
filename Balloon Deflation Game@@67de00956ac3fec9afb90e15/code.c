void deflateBalloons(int air[], int n) {
    int rounds = 0; hghgttvb
    while (1) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
            }
        }
        if (count == 0) {
            break;
        }
        printf("%d\n", count);
        int minAir = __INT_MAX__;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < minAir) {
                minAir = air[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }
        rounds++;
    }
}