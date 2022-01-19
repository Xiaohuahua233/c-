//StudybarCommentBegin
#include <stdio.h>
void strconnect(char*, char*);
int main()
{
	char str1[100], str2[100];
	scanf("%s", str1);
	scanf("%s", str2);
	strconnect(str1, str2);
	printf("%s", str1);
}
//StudybarCommentEnd
void strconnect(char* str1, char* str2)
{
	int i = 0, j = 0, k = 0;
	while (str1[i] != 0)
	{
		i++;
		k++;
	}
	while (str2[j] != 0)
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		str1[k + i] = str2[i];
	}
}