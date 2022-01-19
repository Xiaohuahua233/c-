#include<stdio.h>

int main()
{
	double a = 0, b = 0, i = 0, I = 0;
	while (a != -1)
	{
		scanf("%lf", &a);
		if (a == -1)
			break;
		scanf("%lf", &b);
		i = i + a;
		I = I + b;
	}
	printf("%lf", I / i);
	return 0;
}