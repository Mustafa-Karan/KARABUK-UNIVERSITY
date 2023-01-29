#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,d,e;
	
	printf("ENTER THE LOW VALUE:");
	scanf("%d",&a);
	
	printf("ENTER THE HIGH VALUE:");
	scanf("%d",&b);
	
	printf("DIVISION:");
	scanf("%d",&e);
	
	while(a<=b)
	{
    	d=a%e;
    	if(d==0)
    	{
    	  printf(" %d\n",a);
		}
		
    	a++;
    }
	return 0;
}
