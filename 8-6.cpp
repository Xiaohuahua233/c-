#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[6][100];
	for(int i=0;i<6;i++){
		scanf("%s",a[i]);
	}
	char ch[100];
	for(int i=0;i<6;i++){
		for(int j=0;j<6-i-1;j++){
			if(strcmp(a[j],a[j+1])==1){
				strcpy(ch,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],ch);	
			}
		}
	}
	for(int i=0;i<6;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
