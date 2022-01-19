#include<stdio.h>
#include<math.h>
int MCF(int a, int b)
{
	int d;
	if (a < b)
	{
		d = a; a = b; b = d;
	}
	int c = a;
	a = b;
	b = c % a;
	return  b;
}
int main()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	while (a % b != 0&&b!=1)
	{
		b=MCF(a, b);
	}
	printf("%d", b);
	return 0;
}