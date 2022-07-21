#include <stdio.h>
#include <stdint.h>

int main() {
    int16_t length;
    scanf("%d", &length);

    int32_t inputs[length];
    int32_t sum = 0;
    
    for (int32_t i = 0; i < length; i++) {
       scanf("%ld", &inputs[i]);
       sum += inputs[i];
    }
    
    printf("%ld\n", sum);
    
    return 0;
}