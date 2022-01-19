#include<stdio.h>
int main()
{
	int i;
	float total = 0;
	for (i = 0; i < 5; i++)
		total = (total + 1000) / (1 + 0.0063 * 12);
	printf("%.2f\n",total);

}