#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c;
	a=6;
	b=0;
	
	printf("THE MULTIPLICATION TABLE OF 6\n");
	
	for(b;b<=10;b++)
	{
		c=a*b;
		printf("%d\n",c);
	}
	
	
	
	return 0;
}
