#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct horse
{
	int age, heigth;
	char* name;
};
void Input(struct horse* p);
void Print(struct horse* p, int n);
int main()
{
	struct horse h[50];
	int fun;
	int cnt = 0,flag=0;
	while (1)
	{
		scanf_s("%d", &fun);
		switch (fun)
		{
		case 1:Input(&h[cnt]); cnt++; break;
		case 2:Print(h, cnt); break;
		case 3:flag = 1; break;
		}
		if (flag==1)
		{
			break;
		}
	}
	return 0;
}
void Input(struct horse* p)
{
	p->name = (char*)malloc(sizeof(char) * 10);
	scanf_s("%d%d%s", &p->age, &p->heigth, p->name,10);
}
void Print(struct horse* p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s is %d years old,%d hands hight.\n", (p+i)->name, (p+i)->age, (p+i)->heigth);

	}
}
