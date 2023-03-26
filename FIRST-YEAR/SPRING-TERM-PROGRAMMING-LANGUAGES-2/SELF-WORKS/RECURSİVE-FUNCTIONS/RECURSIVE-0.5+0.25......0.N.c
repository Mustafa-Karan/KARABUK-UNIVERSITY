#include<stdio.h>
float RecFunction(int n){
	static float x=0; 
	if(x==n)
		return 0;
	else{
		x+=2;
		return ((1/x)+RecFunction(n));
	}
}
int main(){
	int n;
	printf("ENTER A NUMBER TO CALCULATE 1/2+1/4......1/N:");
	scanf("%d",&n);
	if(n%2!=0)
		n-=1;
	printf("SUM :%f",RecFunction(n));
	return 0;
}
