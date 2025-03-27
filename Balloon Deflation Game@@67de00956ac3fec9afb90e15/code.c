void deflateBalloons(int air[], int n) {
    int rounds = 0;

    while (1) {
        int count = 0;

        // Count balloons with air
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
            }
        }

        if (count == 0) {
            // All balloons are flat
            break;
        }

        // Print count of balloons with air
        printf("%d\n", count);

        // Find the minimum air level greater than 0
        int minAir = __INT_MAX__;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < minAir) {
                minAir = air[i];
            }
        }

        // Deflate all balloons by the minimum air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }

        rounds++;
    }
}