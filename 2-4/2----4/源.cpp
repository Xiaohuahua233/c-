#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c, dis, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	dis = b * b - 4 * a * c;
	if (dis < 0)
	{
		return 0;
	}
	else if (dis == 0)
	{
		x1 = x2 = (-b) / (a * a);
	}
	else
	{
		x1 = (-b + sqrt(dis)) / (2 * a);
		x2 = (-b - sqrt(dis)) / (2 * a);
	}
	printf("% .2lf % .2lf\n",x1, x2);
	return 0;
}