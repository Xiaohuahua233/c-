#include<stdio.h>
int X(int n){
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int turn(int n){
	int x,y,z;
	x=n/100;
	y=n/10%10;
	z=n%10;
	n=x+y*10+z*100;
	return n;
}
int main(){
	int cnt=0;
	for(int i=101;i<1000;i++){
		if(X(i)&&X(turn(i))&&i<=turn(i)){
			printf("%d,%d\n",i,turn(i));
			cnt++;
		}		
	}
	printf("count=%d",cnt);
	return 0;
}
