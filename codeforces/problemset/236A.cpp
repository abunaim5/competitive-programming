#include <stdio.h>

int main () {
    char name[101];
    int total = 0, common = 0;

    while (scanf("%s", name) == 1) {
        for (int i = 0; name[i] != '\0'; i++) {
            total++;
            for (int j = i + 1; name[j] != '\0'; j++) {
                char temp = '\0';
                if (name[i] > name[j]) {
                    temp = name[i];
                    name[i] = name[j];
                    name[j] = temp;
                }
            }
        }
    }

    for (int k = 0; name[k] != '\0'; k++) {
        int temp = 0;
        for (int x = k + 1; name[x] != '\0'; x++) {
            if (name[k] == name[x]) {
                temp++;
                if (temp > 1) continue;
                else common++;
            }
        }
    }

    if ((total - common) % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else printf("IGNORE HIM!\n");

    return 0;
}