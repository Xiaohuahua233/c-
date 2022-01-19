#include<stdio.h>
#include<math.h>
int fact(int i)
{
	int a, b = 1;
	for (a = 1; a <= i; a++)
		b = b * a;
	return b;
}
int main() {

	int m, n;
	while (1) {
		scanf("%d,%d", &m, &n);
		if (m >= n && n > 0) 
			break;

	}
	double result;
	result = fact(m) / (fact(n) * fact(m - n));
	printf("%.2lf\n", result);
	return 0;
}