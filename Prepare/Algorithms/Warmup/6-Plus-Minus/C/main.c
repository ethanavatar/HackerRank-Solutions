#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("%.6f\n", (double)positive_count / n);
    printf("%.6f\n", (double)negative_count / n);
    printf("%.6f\n", (double)zero_count / n);

    return 0;
}