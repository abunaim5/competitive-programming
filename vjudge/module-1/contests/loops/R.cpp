#include <stdio.h>

int main () {
    int T, x, y, z;
    scanf("%d", &T);

    while (T--) {
        int students = 0;
        double passRate;
        scanf("%d%d%d", &x, &y, &z);

        students = x * y;
        passRate = (double) (z * 100) / students;

        if (passRate > 50) {
            printf("Yes\n");
        } else printf("No\n");
    }

    return 0;
}