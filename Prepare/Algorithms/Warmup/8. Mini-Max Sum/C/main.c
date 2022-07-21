#include <stdio.h> // printf
#include <stdlib.h> // qsort
#include <stdint.h>

int compare( const void* a, const void* b)
{
    int64_t int_a = * ( (int64_t*) a );
    int64_t int_b = * ( (int64_t*) b );

    return (int_a > int_b) - (int_a < int_b);
}

int main() {
    int64_t arr[5];
    for (int8_t i = 0; i < 5; i++) {
        scanf("%jd", &arr[i]);
    }

    qsort(arr, 5, sizeof(int64_t), compare);

    int64_t min_sum = 0;
    int64_t max_sum = 0;
    for (int8_t i = 0; i < 5; i++) {
        if (i < 4) {
            min_sum += arr[i];
        }
        if (i > 0) {
            max_sum += arr[i];
        }
    }
    
    printf("%jd %jd", min_sum, max_sum);

    return 0;
}