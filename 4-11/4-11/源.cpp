#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int i, j, k, t, N;
	scanf("%d", &N);

	for (j = 0; j < N; j++)
	{
		for (i = 0; i < N; i++)
		{
			t = (i + j) % N;
			for (k = 0; k < N; k++)
				printf("%d", (k + t) % N + 1);
			printf("\n");
		}
		printf("\n");
	}
}