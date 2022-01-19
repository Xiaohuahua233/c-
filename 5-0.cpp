#include<stdio.h>
int Isprime(int m)
{
	int i = 2,flag=4;
	while (m > 1 &&flag!=0&&flag!=1 )
	{
		while (m > 1 && i < m&&flag!=0)
		{
			if (m % i == 0)
			{
				flag = 0;
			}
			else
				flag = 1;
			i++;
		}
	}
	return flag;
}
//StudybarCommentBegin
int main()
{
	int  m, flag = 1; /*标志变量flag初值置为1*/

	//printf("Please enter a number:");
	scanf("%d", &m);

	flag = Isprime(m);


	if (flag)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
//StudybarCommentEnd