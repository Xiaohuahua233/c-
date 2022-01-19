#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, d, x1, x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	d = b * b - 4.0 * a * c;
	if (a == 0) {
		if (b == 0)
			printf("Not an equation");
		else 
			printf("%.2lf", -c / b);
	}
	else if (d >= 0) {
		x1 = (-b + sqrt(d)) / 2.0 / a;
		x2 = (-b - sqrt(d)) / 2.0 / a;
		if (x1 < x2)
			printf("%.2lf %.2lf", x2, x1);
		else
			printf("%.2lf %.2lf", x1, x2);
	}
	else {
		x1 = -b / 2 / a;
		x2 = fabs(sqrt(-d) / 2 / a);
		printf("%.2lf+%.2lfi\n%.2lf-%.2lfi", x1, x2, x1, x2);
	}
	return 0;
}