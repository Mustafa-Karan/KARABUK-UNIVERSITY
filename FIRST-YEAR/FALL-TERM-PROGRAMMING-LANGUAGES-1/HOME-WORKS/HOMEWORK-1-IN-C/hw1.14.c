#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,fac;
	fac=1;
	
	printf("ENTER THE NUMBER THAT YOU WANT TO FIND ITS FACTORIAL\n");
	scanf("%d",&a);
	
	for(a;a>0;a--)
	{
		fac=fac*a;
	}
	printf("FACTORIAL:%d",fac);
	return 0;
}
