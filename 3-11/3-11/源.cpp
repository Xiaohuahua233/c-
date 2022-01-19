#include<stdio.h>
int main() {
	int i,sum;
	i = 10;
	sum = i;
	while (--i)sum = i * (sum + 1);
	printf("%d", sum);
	return 0;
}