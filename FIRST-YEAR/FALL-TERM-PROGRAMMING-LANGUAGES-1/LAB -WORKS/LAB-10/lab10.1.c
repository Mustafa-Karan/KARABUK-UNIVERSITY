#include<stdio.h>

int main(){
	float sum[8];
	float xsum;
	xsum=0;
	int i;
	for(i=0;i<8;i++)
	{
		printf("PLEASE ENTER %d. VALUE:",i+1);
		scanf("%f",&sum[i]);
		xsum=xsum+sum[i];
	}
		xsum=xsum/(i);
		printf("SUM=%f",xsum);
	
	
	
	return 0;
}
