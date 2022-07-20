#include <stdio.h>

int main() {
    int length;
    scanf("%d", &length);

    int inputs[length];
    int sum = 0;
    
    for (int i = 0; i < length; i++){
       scanf("%d", &inputs[i]);
       sum += inputs[i];
    }
    
    printf("%d\n", sum);
    return 0;
}