#include<stdio.h>
long RecursiveSquare(long x){
	if(x==1)
		printf("%4ld",x);
	else{
		printf("%4ld",x*x);
		return (RecursiveSquare(x-1));
	}
}
int main(){
	long x;
	printf("ENTER A NUMBER TO CALCULATE SQUARE N TO 1 :");
	scanf("%ld",&x);
	RecursiveSquare(x);
	return 0;
}
