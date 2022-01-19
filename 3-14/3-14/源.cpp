#include<stdio.h>
#include<math.h>
int main(void)
{
	int n = 1;
	double sum = 1;
	while ((1.0 / n) >= 1e-4)
	{
		n = n + 1;
		if (n % 2 == 1)sum += 1.0 / n;
		if (n % 2 == 0)sum -= 1.0 / n;
	}
	printf("%lf", sum);
	return 0;
}