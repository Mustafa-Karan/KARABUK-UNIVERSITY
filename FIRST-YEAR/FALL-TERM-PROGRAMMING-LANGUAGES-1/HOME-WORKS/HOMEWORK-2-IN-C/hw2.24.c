#include<stdio.h>
#include<math.h>

int main(){
	long long number,i,mod,decimal,sum=0;
	printf("ENTER A BINARY NUMBER TO CONVERT DECIMAL:");
	scanf("%lld",&number);
	for(i=0;number>0;i++)
	{
		mod=number%10;
		number=number/10;
		if(mod!=0&&mod!=1)
		{
		printf("WRONG ENTERING PLEASE ENTER A BINARY NUMBER");
		break;
		 
		}
		decimal=mod*pow(2,i);
		sum=sum+decimal;
		
		if(number==0)
		{
		printf("DECIMAL FORMAT OF BINARY NUMBER IS:%lld",sum);
		break;
		}
		
	}
	
	return 0;
}
