#include <stdio.h>

int main() {
    int alice[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &alice[i]);
    }

    int bob[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &bob[i]);
    }

    int alice_score = 0;
    int bob_score = 0;

    for (int i = 0; i < 3; i++) {
        if (alice[i] > bob[i]) {
            alice_score++;
        } else if (alice[i] < bob[i]) {
            bob_score++;
        }
    }

    printf("%d %d", alice_score, bob_score);
    
    return 0;
}