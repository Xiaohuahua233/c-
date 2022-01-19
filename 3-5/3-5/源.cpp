#include<stdio.h>
#include<math.h>
int main() {
	double x, y;
	scanf("%lf", &x);
	if (x > 0)
		y = (exp(-x));
	else if (x == 0)
		y == 1;
	else if (x < 0)
		y = -(exp(x));
	printf("y=%g", y);
	return 0;
}