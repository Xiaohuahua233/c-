#include<stdio.h>
#include<math.h>
int main()
{
	int a, b,sum;
	scanf("%d,%d", &a, &b);
	if (a * b < 0)
	{
		sum = -abs(a) * abs(b);
	}
	if (a * b > 0)
	{
		sum = abs(a) * abs(b);
	}
	printf("%d", sum);
}