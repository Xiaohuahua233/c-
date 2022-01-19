#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[50],t[50];
	scanf("%s",str);
	int n=strlen(str);
	for(int i=0;i<n;i++){
		t[i]=str[n-1-i];
	}
	t[n]='\0';
	strcat(str,t);
	printf("%s",str);
	return 0;
}
