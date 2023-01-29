#include<stdio.h>
#include<math.h>
int main(){
	
	// to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
	int stopvalue,i,j,x,fac=1,c=-1;
	float sum=1;
	printf("TO FIND THE SUM OF THE SERIES [ 1-X^2/2!+X^4/4!-...] ENTER STOP VALUE:");
	scanf("%d",&stopvalue);
	printf("ENTER X VALUE:");
	scanf("%d",&x);
	if(stopvalue>=2)
	{
		for(i=2;i<=stopvalue;i+=2)
		{
			
			for(j=i;j>1;j--)
			{
				fac=fac*j;
			}
			
			sum=sum+c*pow(x,i)/fac;
			c*=-1;
			fac=1;
		}


	}
	else
	printf("SUM:%f",sum);
	printf("SUM:%f",sum);
	
	return 0;
}
