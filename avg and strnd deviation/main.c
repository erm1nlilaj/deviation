#include <stdio.h>
#include <math.h>

void read(double arr[], int n) {
    int i;
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
}

int main() {
    int i, n = 10;
    double sum = 0.0, avg, stddev, variance = 0.0;
    double arr[n];

    // Call read function to take input of the 10 numbers
    read(arr, n);

    // Calculate avg
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = sum / n;

    // Calculate variance
    for (i = 0; i < n; i++) {
        variance += pow(arr[i] - avg, 2);
    }
    variance /= n;

    // Calculate standard deviation
    stddev = sqrt(variance);

    // Output results
    printf("Avg: %.2lf\n", avg);
    printf("Standard Deviation: %.2lf\n", stddev);

    return 0;
}
