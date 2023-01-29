#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//the program that finds summary entered low value between hýgh value
	
	int a,b,sum;
	sum=0;
	
	printf("ENTER THE LOW VALUE:");
	scanf("%d",&a);
	
	printf("ENTER THE HIGH VALUE:");
	scanf("%d",&b);
	
	for(a;a<=b;a++)
	{
		sum=sum+a;
	}
	
	printf("SUM:%d",sum);
	
	return 0;
}
