//StudybarCommentBegin
#include <string.h>
#include <stdio.h>
int CountSubstr(char* s1, char* s2);

int main()
{
	char s1[100], s2[100];
	scanf_s("%s", s1,100);
	scanf_s("%s", s2,100);
	printf("%d", CountSubstr(s1, s2));
}
//StudybarCommentEnd
int CountSubstr(char* s1, char* s2)
{
	char* str, * substr,*start;
	str = s1; substr = s2;
	int i, cnt = 0;
	for ( ;*str!=0;str++)
	{
		start = str;
		while (*str==*substr)
		{
			str++;
			substr++;
		}
		if (*substr==0)
		{
			cnt++;
		}
		substr = s2;
		str = start;
	}
	return cnt;
}