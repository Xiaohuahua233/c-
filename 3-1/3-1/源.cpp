#include<stdio.h>

int main() {
	int best;
	for (best = 1; best <= 4; best++) {
	//a b c d��¼��λר�ҵĻ�
		int a = (best == 2);
		int b = (best == 4);
		int c = !(best == 3);
		int d = !b;
		if (a + b + c + d != 1)
			continue;//������ֻ��1λר��˵�Ե�����
		//�����ѵĳ�
		printf("%d\n", best);
		//����ж���ȷ��ר��
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