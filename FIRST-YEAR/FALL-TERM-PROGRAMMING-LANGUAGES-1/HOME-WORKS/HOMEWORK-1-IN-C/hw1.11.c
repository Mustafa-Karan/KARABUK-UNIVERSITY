#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,sum;
	a=1;
	sum=0;
    
	printf("ENTER NUMBERS TO FIND THEIR SUM:\n");
	

	for(a;a<=10;a++)
	{
	    scanf("%d",&b);
		sum=sum+b;
	}
		printf("SUMMARY OF THE ENTERED NUMBERS IS:%d",sum);
	
	return 0;
}
