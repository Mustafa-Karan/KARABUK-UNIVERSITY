#include<stdio.h>
long RecFac(long x){
	static long result=1;
	if(x==0)
		return;
	else{
		RecFac(x-1);
		return 	result*=x;
	}
}
void main(){
	long num;
	printf("TO CALCULATE FACTORIAL ENTER A NUMBER:");
	scanf("%ld",&num);
	printf("%ld'S FACTORIAL IS:%ld",num,RecFac(num));
}
