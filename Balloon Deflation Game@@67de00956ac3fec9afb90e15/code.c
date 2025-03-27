// Your code here...
void deflateBalloons(int air[], int n) {
    int rounds = 0;

    while (1) {
        // Find the minimum air level greater than 0
        int minAir = __INT_MAX__;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                if (air[i] < minAir) {
                    minAir = air[i];
                }
                count++;
            }
        }

        if (count == 0) {
            // All balloons are flat
            break;
        }

        // Print count of balloons with air
        printf("%d\n", count);

        // Deflate all balloons by the minimum air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }

        rounds++;
    }
}