#include <stdio.h>

int main() {
    int length;
    scanf("%d", &length);

    long inputs[length];
    long sum = 0;
    
    for (long i = 0; i < length; i++) {
       scanf("%ld", &inputs[i]);
       sum += inputs[i];
    }
    
    printf("%ld\n", sum);
    return 0;
}