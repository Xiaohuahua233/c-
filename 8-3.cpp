#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100];
	bool flag=1;
	scanf("%s",a+1);
	int n=strlen(a)-1;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[n-i+1]){
			flag=0;
			break;
		}
	}
	if(flag){
		printf("yes");
		return 0;
	}
	printf("no");
	return 0;
}
