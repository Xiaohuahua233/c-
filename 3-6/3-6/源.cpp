#include<stdio.h>

int main() 
{
	double h, w, t;
	scanf("%lf%lf", &w, &h);
	if (h > 0 && w > 0)
	{
		t = w / h / h;
		if (t < 18)
		{
			printf("%lf\nlower weight",t);
		}
		else if (t >= 18 && t < 25)
		{
			printf("%lf\nnormal weight",t);
		}
		else if (t >= 25 && t < 27)
		{
			printf("%lf\nhigher weight",t);
		}
		else
		{
			printf("%lf\nobesity",t);
		}
	}
	return 0;
}