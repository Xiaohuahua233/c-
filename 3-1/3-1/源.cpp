#include<stdio.h>

int main() {
	int best;
	for (best = 1; best <= 4; best++) {
	//a b c d记录四位专家的话
		int a = (best == 2);
		int b = (best == 4);
		int c = !(best == 3);
		int d = !b;
		if (a + b + c + d != 1)
			continue;//不符合只有1位专家说对的条件
		//输出最佳的车
		printf("%d\n", best);
		//输出判断正确的专家
		if (a == 1)
			printf("A\n");
		else if (b == 1)
			printf("B\n");
		else if (c == 1)
			printf("C\n");
		else
			printf("D\n");
	}
	return 0;
}