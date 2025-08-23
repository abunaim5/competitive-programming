#include <stdio.h>

int main () {
    int T, g, m, glass = 0, mug = 0;
    scanf("%d%d%d", &T, &g, &m);

    for (int i = 0; i < T; i++) {
        if (g == glass) {
            glass = 0;
        } else {
            if (mug == 0) {
                mug = m;
            } else if (glass + mug <= g) {
                glass = glass + mug;
                mug = 0;
            } else {
                mug = mug - (g - glass);
                glass = g;
            }
        }
    }

    printf("%d %d\n", glass, mug);

    return 0;
}