#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 999) {
        printf("%d\n", n);
    } else if(n >= 1000 && n <= 9999) {
        printf("%d\n", (n / 10) * 10);
    } else if(n >= 10000 && n <= 99999) {
        printf("%d\n", (n / 100) * 100);
    } else if(n >= 100000 && n <= 999999) {
        printf("%d\n", (n / 1000) * 1000);
    } else if(n >= 1000000 && n <= 9999999) {
        printf("%d\n", (n / 10000) * 10000);
    } else if(n >= 10000000 && n <= 99999999) {
        printf("%d\n", (n / 100000) * 100000);
    } else if(n >= 100000000 && n <= 999999999) {
        printf("%d\n", (n / 1000000) * 1000000);
    }
    
    return 0;
}