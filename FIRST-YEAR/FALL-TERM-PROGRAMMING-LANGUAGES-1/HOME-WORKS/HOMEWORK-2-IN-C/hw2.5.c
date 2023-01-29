#include<stdio.h>
#include<math.h>

int main(){

	/*int result;
	result=2*2*2*2;
	printf("2^4=%d",result);*/
	
	/*int x,result;
	printf("ENTER A NUMBER:");
	scanf("%d",&x);
	result=x*x*x*x;
	printf("%d^4=%d",x,result);*/
	
	int i,x,y,result;
	result=1;
	printf("TO CALCULATE x^y:");
	printf("\nENTER x:");
	scanf("%d",&x);
    printf("ENTER y:");
	scanf("%d",&y);
	for(i=0;i<y;i++)
	{
	result=result*x;
	}
	printf("%d^%d=%d",x,y,result);
	
	return 0;
}
