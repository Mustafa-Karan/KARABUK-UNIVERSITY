#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// banknotes 100(a),50(b),20(c),10(d) ,i=money
	//money%10 gives coin amount maybe we can use float to find for example 0.20
	int i,countera,counterb,counterc,counterd;

	countera=0;
	counterb=0;
	counterc=0;
	counterd=0;

	printf("ENTER THE AMOUNT OF MONEY:");
	scanf("%d",&i);
	
	
	if(i%10!=0)
	{
		printf("PLEASE ENTER MULTIPLES OF 10");
	}
	else
	{
	
		if(i>=100)
		{
			for(i;i>=100;i-=100)
			{		
				countera++;
			}
			
		}
		
		if(i>=50)
		{
			for(i;i>=50;i-=50)
			{
				counterb++;
			}
			
		}
		
		if(i>=20)
		{
			for(i;i>=20;i-=20)
			{
				counterc++;
			}
			
		}
		
		if(i>=10)
		{
			for(i;i>=10;i-=10)
			{
				counterd++;
			}
			
		}
		
		printf("BANKNOTE(100):%d",countera);
		printf("\nBANKNOTE(50):%d",counterb);
		printf("\nBANKNOTE(20):%d",counterc);
		printf("\nBANKNOTE(10):%d",counterd);
	
	}
	return 0;
}
