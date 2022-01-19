#include<stdio.h>

int main() {
	int age;
	scanf("%d", &age);
	switch (age)
	{
	case 2:
	case 3:
		printf("age:%d,enter Lower class", age); break;
	case 4:
		printf("age:%d,enter Middle class", age); break;
	case 5:
	case 6:
		printf("age:%d,enter Higher class", age); break;
	}
	return 0;
}