#include <stdio.h> // printf

int between(int x, int a, int b) {
    return (x >= a && x <= b);
}

int main() {
    int s, t;
    scanf("%d", &s);
    scanf("%d", &t);

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int apples[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &apples[i]);
    }

    int oranges[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &oranges[i]);
    }

    int apple_count = 0;
    int orange_count = 0;

    for (int i = 0; i < m; i++) {
        if (between(apples[i] + a, s, t)) {
            apple_count++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (between(oranges[i] + b, s, t)) {
            orange_count++;
        }
    }

    printf("%d\n%d", apple_count, orange_count);

    return 0;
}