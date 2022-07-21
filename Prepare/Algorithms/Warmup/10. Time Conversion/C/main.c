#include <stdio.h>
#include <stdlib.h>

int main() {
    int hours, minutes, seconds;
    char am_pm;
    scanf("%d:%d:%d%c", &hours, &minutes, &seconds, &am_pm);

    if (am_pm == 'P') {
        if (hours != 12) {
            hours += 12;
        }
    } else {
        if (hours == 12) {
            hours = 0;
        }
    }

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}