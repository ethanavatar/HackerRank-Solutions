#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            putchar(' ');
        }
        for (int j = 0; j < (i + 1); j++) {
            putchar('#');
        }
        putchar('\n');
    }

    return 0;
}