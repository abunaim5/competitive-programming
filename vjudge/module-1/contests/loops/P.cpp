#include <stdio.h>

int main () {
    int T, x, y, z;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int hours = 0, minutes = 0, totalMinute = 0;
        scanf("%d%d%d", &x, &y, &z);

        totalMinute = x * y;
        hours = z * 24;
        minutes = hours * 60;
        if (minutes >= totalMinute) printf("Yes\n");
        else printf ("No\n");
    }

    return 0;
}