#include<stdio.h>

int main(){
	
	// to find the sum of the series  [ x - x^3 + x^5 + ......].
	
	int stopvalue,i,c=1;
	float sum=0,x;
	
	printf("ENTER X VALUE:");
	scanf("%f",&x);
	printf("TO FIND THE SUM OF THE SERIES  [ x - x^3 + x^5 + ......] ENTER EXPONENTIAL VALUE:");
	scanf("%d",&stopvalue);
	
	if(stopvalue>=3)
	{
		for(i=1;i<=stopvalue;i+=2)
		{
			sum=sum+c*pow(x,i);
			c*=-1;
		}
			
	printf("SUM:%f",sum);
	}
	
	if(stopvalue<3)	
		
		printf("SUM:%f",x);
	
	return 0;
}
	
	

			
			
			
