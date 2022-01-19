#include<stdio.h>
int main() {
	int hh, mm, ss;
	scanf("%2d:%2d:%2d", &hh,&mm,&ss);
	printf("%02d,%02d,%02d", hh, mm, ss);
	return 0;
}