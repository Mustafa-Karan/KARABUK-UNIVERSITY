#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,sum;
	
	printf("ENTER THE NUMBERS THAT YOU WANT TO FIND THE SUM OF\n");
	
	printf("FIRST NUMBER:");
	scanf("%d",&num1);
	
	printf("\nSECOND NUMBER:");
	scanf("%d",&num2);
	
	sum=num1+num2;
	
	printf("\nSUM:%d",sum);
	
	return 0;
}
