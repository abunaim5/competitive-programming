#include <stdio.h>

int getIdx(char x) {
        return x - 'a';
}

int getDiff(int y, int z) {
    int diff = y - z;
    if(diff < 0) diff = -diff;
    if(diff > 2) diff = 5 - diff;
    return diff;
}

int main() {
    char s1, s2, t1, t2;
    int a1, a2, b1, b2, d1, d2;
    scanf("%c %c %c %c", &s1, &s2, &t1, &t2);
    if(s1 == s2 || t1 == t2) {
        return 0;
    }

    a1 = getIdx(s1);
    a2 = getIdx(s2);
    b1 = getIdx(t1);
    b2 = getIdx(t2);

    d1 = getDiff(a1, a2);
    d2 = getDiff(b1, b2);

    // printf("%d %d\n", d1, d2);

    if(d1 == d2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}