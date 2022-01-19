#include<stdio.h>
int main()
{
	int a[10], i, b = 0, c = 0;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] > b)
			b = a[i];
		if (a[i] < c)
			c = a[i];
	}
	printf("最大值为%d,最小值为%d", b, c);
}