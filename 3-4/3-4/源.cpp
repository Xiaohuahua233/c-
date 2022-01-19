#include<stdio.h>
int main() 
{
	int x;
	scanf("%d", &x);
	if (x != 0)
	{
		if (x < 0)
		{
			if (x % 2 == 0)
			{
				printf("%d is a negative even\n", x);
			}
			if (x % 2 != 0)
			{
				printf("%d is a negative odd\n", x);
			}
		}
		if (x > 0)
		{
			if (x % 2 == 0)
			{
				printf("%d is a positive even\n", x);
			}
			if (x % 2 != 0)
			{
				printf("%d is a positive odd\n", x);
			}
		}
	}
	else
	{
		printf("%d is zero\n", x);
	}
}