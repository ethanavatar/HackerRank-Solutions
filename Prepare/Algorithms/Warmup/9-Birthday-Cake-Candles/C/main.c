#include <stdio.h> // printf
#include <stdlib.h> // qsort

int compare( const void* a, const void* b)
{
    int int_a = * ( (int*) a );
    int int_b = * ( (int*) b );

    return (int_a > int_b) - (int_a < int_b);
}

int main() {
    int n;
    scanf("%d", &n);

    int candles[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);
    }

    qsort(candles, n, sizeof(int), compare);

    int max_candle = candles[n-1];
    int max_count = 0;
    for (int i = 0; i < n; i++) {
        if (candles[i] == max_candle) {
            max_count++;
        }
    }

    printf("%d\n", max_count);

    return 0;
}