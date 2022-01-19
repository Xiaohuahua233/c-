#include<stdio.h>
int MaxCommonFactor(int x,int y){
	while(x!=y){
		if(x<y){
			x=x+y;
			x=x-y;
			x=x-y;
		}
		x=x-y;	
	}
	return y;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);

	printf("%d",gcd(a,b));
	return 0;
}