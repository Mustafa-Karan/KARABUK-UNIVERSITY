#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,counter,step;
	
	counter=0;
	
	printf("ENTER THE LOW VALUE:");
	scanf("%d",&a);
	
	printf("ENTER THE HIGH VALUE:");
	scanf("%d",&b);
	
	printf("ENTER THE STEP:");
	scanf("%d",&step);
	
	for(a;a<=b;a+=step)
	{
		if(a%step==0)
		{
			printf("%d\n",a);
		}
		counter++;
	}
	printf("THE NUMBER OF DIVISIBLE NUMBERS IS:%d",counter);
	
	return 0;
}
