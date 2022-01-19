#include<stdio.h>
int main()
{
	int number;
	scanf("%d", &number);
		if (number ==25)
		printf("Right!\nThe number is:25\n");
	else if (number > 25)
		printf("Wrong!Too high!\nThe number is:25");
	else
		printf("Wrong!Too low!\nThe number is:25");
	return 0;
}