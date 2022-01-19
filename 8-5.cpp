#include<stdio.h>
#include<string.h>
int convertToInt(char num[30]){
	int ans=0,i=0,n=strlen(num);
	if(num[i]=='+'||num[i]=='-'){
		i++;
	}
	for(;i<n;i++){
		ans=ans*10+num[i]-'0';
	}
	if(num[0]=='-') ans=-ans;
	return ans;
}
int main()
{
              char num[30];
              gets(num);
              printf("%d",convertToInt(num));
              return 0;
}
