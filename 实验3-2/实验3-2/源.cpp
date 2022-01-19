#include<stdio.h>
#define NUM 25
int main() 
{
	int i=0;
	while (1)
	{
		int number = 0;
		scanf("%d", &number);
		i++;
		if (number == NUM)
		{
			printf("Right!\n");
			break;
		}
		else if (number > NUM)
		{
			printf("Wrong!Too high!\n");
		}
		else
		{
			printf("Wrong!Too low!\n");
		}
	}
	printf("You guess %d times\nThe game is over!\n", i);
	return 0;
}