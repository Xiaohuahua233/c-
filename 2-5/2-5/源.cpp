#include<stdio.h>
#include<math.h>
int main() {
	double a,b,c,d;
	scanf("%lf", &a);
	b = (round(a * 100)) / 100;
	c = (round(b * 10)) / 10;
	d = (round(b)) / 1;
	printf("%.0f\n%.1f\n%.2f", d, c, b);
	return 0;
}