#include<stdio.h>
#include<math.h>
int main()
{
	double i, sum = 0;
	for (i = 1; i <= 20; i++) {
		if ((int)i % 2 == 1) sum += i / (3 * i + 3);
		if ((int)i % 2 == 0) sum -= i / (3 * i + 3);
	}
	printf("%.6lf", sum);
	return 0;
}