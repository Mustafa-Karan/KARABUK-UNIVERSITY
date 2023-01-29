#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s1;
	
	printf("ENTER A NUMBER:");
	scanf("%d",&s1);
	
	if(s1%2==0)
	{
		printf("THE NUMBER IS EVEN");
	
	}
	else{
		printf("THE NUMBER IS ODD");
	}	
	
	return 0;
}
