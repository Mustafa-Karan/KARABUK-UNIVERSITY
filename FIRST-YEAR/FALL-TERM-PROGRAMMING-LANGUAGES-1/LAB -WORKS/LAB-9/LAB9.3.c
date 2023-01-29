#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum,a,b;
	a=1000;
	b=2000;
	sum=0;
	
	printf("EVEN NUMBERS BETWEEN 1000 TO 2000 AND THEIR SUMMARY\n\n");
	
	for(a;a<=b;a++)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
			sum=sum+a;
	}
	
	printf("THE SUMMARY OF THE NUMBERS IS:%d",sum);
	
	return 0;
}
