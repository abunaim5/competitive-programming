#include <stdio.h>

int main() {
    int N, x, s, score = 0;
    scanf("%d%d", &N, &x);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &s);
        if (s <= x) {
            score += s;
        }
    }

    printf("%d\n", score);

    return 0;
}