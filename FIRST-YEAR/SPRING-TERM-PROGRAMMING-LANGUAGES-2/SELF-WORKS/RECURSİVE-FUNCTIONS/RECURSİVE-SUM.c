#include<stdio.h>
int RecursiveSum(int n){
	if(n==0)
		return 0;
	return (n+RecursiveSum(n-1));
}
int main(){
	int num;
	printf("PLEASE ENTER A NUMBER:");
	scanf("%d",&num);
	printf("NUM TO 0 SUM IS:%d",RecursiveSum(num));
	return 0;
}
