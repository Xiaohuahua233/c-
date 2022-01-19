#include<bits/stdc++.h>
using namespace std;
bool is(char x){
	if(x<='z'&&x>='a') return 1;
	if(x<='Z'&&x>='A') return 1;
	return 0;
}
int main(){
	char a[1050];
	gets(a);
	int n=strlen(a),word=0;
	for(int i=0;i<n;i++){
		if(is(a[i])){
			word++;
			while(is(a[++i]));
		}
	}
	printf("%d",word);
	return 0;
}
