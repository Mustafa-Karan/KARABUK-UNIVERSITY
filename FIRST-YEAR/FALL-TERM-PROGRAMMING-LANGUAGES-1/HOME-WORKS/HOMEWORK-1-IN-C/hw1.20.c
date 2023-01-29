#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,b;
	b=0;
	
	printf("ENTER A NUMBER TO SEE HOW MUCH DIGITS IT HAVE:");
	scanf("%d",&num);
	
	printf("\n\n");
	
	while(num>0)
	{
		num=num/10;
		b++;
	}
	printf("DIGIT NUMBER IS:%d",b);
	return 0;
}
