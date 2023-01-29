#include<stdio.h>

int main(){
	
	long long number,i,bin,final=0,ending=0,finalmod;
	
	printf("ENTER A NUMBER TO CONVER BINARY:");
	scanf("%lld",&number);
	
	float fnumber;
	fnumber=number;
	
	for(i=number/2;i>0;i/=2)
	{
		fnumber/=2;
		bin=2*(fnumber-i);
		if(bin==1)
		final=(final*10)+bin;
		else
		final=(final*10);
	}
	
	final=final*10+1;
	
	for(final;final>0;final/=10)
	{
		finalmod=final%10;
		ending=ending*10+finalmod;
	}
	printf("BINARY FORMAT:%lld",ending);
	
	return 0;
}
