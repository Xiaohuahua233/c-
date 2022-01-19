#include<stdio.h>
int fac(int n){
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main() {
	int x;
	do {
		scanf("%d", &x);
	} while (x < 6 || x % 2);
	for (int i = 2; i < x / 2 + 1; i++) {
		if (fac(i) && fac(x - i)) {
			printf("%d=%d+%d\n", x, i, x - i);
		}
	}
	return 0;
}