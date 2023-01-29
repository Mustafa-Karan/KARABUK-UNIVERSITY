#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("ENTER A POZITIVE VALUE:");
	scanf("%d",&a);
	printf("\n\n");
	while(a>=1)
	{
		printf("%d\n",a);
		a--;
	}
	
	
	return 0;
}
