#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++) {
	    int X, N, total;
	    int newPlane = 0;
	    scanf("%d%d", &X, &N);
	    
	    if (N % 100 != 0) {
	        total = (N + 99) / 100; // ceil method
	    } else total = N / 100;
	    
	    if (X <= total) {
	        newPlane = total - X;
	    } else if (X > total) newPlane = 0;
	    
	    printf("%d\n", newPlane);
	}
	
	return 0;
}