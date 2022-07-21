#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int r[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &r[j]);
        }
        sum += r[i];
        sum -= r[(n-1)-i];
    }

    printf("%d\n", abs(sum));

    return 0;
}