#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y;
	char ne[100],c[10][10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"},a[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"},b[10][10]={"1","2","twenty-","thirty-","forty-","fifty-","sixty-","seventy-","eight-","ninety-"};
	scanf("%d",&n);
	x=n%10;
	y=n/10;
	if(y>1){
		strcpy(ne,strcat(b[y],a[x]));
		if(!x){
			int n=strlen(ne);
			for(int i=n-1;i>=n-5;i--){
				ne[i]='\0';
			}
		}
	}
	else{
		if(y){
			strcpy(ne,c[x]);
		}
		else{
			strcpy(ne,a[x]);
		}
	}
	ne[0]=ne[0]+'A'-'a';
	printf("%s",ne);
	return 0;
}
