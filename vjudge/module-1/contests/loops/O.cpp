#include <stdio.h>

int main () {
    int T, second, frames = 24, words = 1000;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int totalWords = 0, totalFrames = 0;
        scanf("%d", &second);

        totalFrames = second * frames;
        totalWords = totalFrames * words;
        printf("%d\n", totalWords);
    }

    return 0;
}