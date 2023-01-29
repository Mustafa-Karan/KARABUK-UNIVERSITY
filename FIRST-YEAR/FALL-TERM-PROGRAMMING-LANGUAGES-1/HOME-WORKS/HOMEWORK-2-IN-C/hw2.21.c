#include<stdio.h>

int main(){
	int stopvalue,i,j,mod,sum=0;
	printf("TO FIND SUM OF THE SERIES  1 +11 + 111 + 1111 + .. n ENTER A STOP VALUE:");
	scanf("%d",&stopvalue);
	
	for(j=1;j<=stopvalue;j++)
	{
		for(i=j;i>0;i/=10)
		{
			mod=i%10;
			if(mod==1){
			}
			
			else
			break;
			if(i<10&&i%10==1)
			{
				
			sum=sum+j;
			break;
			}
		}
	}
	printf("SUM:%d",sum);
	
	
	return 0;
}
