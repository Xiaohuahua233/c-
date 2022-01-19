#include<stdio.h>  

void main()

{

	int i, j, n = 0, x;
		for (i = 23; n == 0; i += 2)
		{
			for (j = 1, x = i; j <= 4 && x >= 11; j++)
				if ((x + 1) % (j + 1) == 0)
					x -= (x + 1) / (j + 1);
				else { x = 0; break; }
			if (j == 5 && x == 11)
			{
				printf("%d",i);
				n = 1;
			}
		}
}