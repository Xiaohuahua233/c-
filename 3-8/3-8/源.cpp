#include<stdio.h>
#include<math.h>
#define EPS 1e-4

int main()
{
	double a, b, c, flag=1;
	{
		scanf("%lf,%lf,%lf", &a, &b, &c);
		if (((a + b) < c) || (a + c) < b || (b + c) < a)
			printf("不是三角形\n");
		else
		{
			if ((a == b) || (b == c) || (a == c))
			{
				printf("等腰");
				flag = 0;
			}
			if (fabs(a * a + b * b - c * c)<=EPS ||fabs( a * a + c * c - b * b)<=EPS || fabs(b * b + c * c - a * a)<=EPS)
			{
				printf("直角");
				flag = 0;
			}
			if (flag)
			{
				printf("一般");
			}
			printf("三角形\n");
		}
		return 0;
	}
}