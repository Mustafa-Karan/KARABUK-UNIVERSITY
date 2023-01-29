#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,counter,hcf;
	printf("ENTER THE FIRST NUMBER:");
	scanf("%d",&num1);
	printf("ENTER THE SECOND NUMBER:");
	scanf("%d",&num2);  
	
	for (counter=1;counter<=num1&&counter<=num2;counter++)
	{
		if(num1%counter==0&&num2%counter==0)
		{
			hcf=counter;
		}
	}
	printf("HCF IS:%d",hcf);
	return 0;
}
