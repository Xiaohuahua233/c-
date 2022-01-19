#include<stdio.h>
int main(void)
{
	double a;
	while (scanf("%lf%%", &a) == 1)
	{
		printf("%g\n", a / 100);
	}
	return 0;
}