#include<stdio.h>
int gcd(int a, int b) {
	int c = 1;
	while (c > 0) {
		c = a % b;
		if (c > 0) {
			a = b;
			b = c;
		}
	}
	return b;
}
int main() {
	int x, y;
	scanf("%d,%d", &x, &y);
	if (x < y) {
		x = x + y;
		y = x - y;
		x = x - y;
	}
	printf("%d", gcd(x, y));
	return 0;
}