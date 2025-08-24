#include <stdio.h>

int main () {
    int T, bill, friends;
    scanf("%d", &T);

    while (T--) {
        int totalPerson = 0, perperson = 0, thereBill = 0, myBill = 0;
        scanf("%d%d", &bill, &friends);

        totalPerson = friends + 1;
        if (bill % totalPerson == 0) {
            myBill = bill / totalPerson;
        } else {
            perperson = bill / totalPerson;
            thereBill = perperson * friends;
            myBill = bill - thereBill;
        }

        printf("%d\n", myBill);
    }

    return 0;
}