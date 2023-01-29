#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int first=1;
	int second=1;
	int fibonacci;
	fibonacci=first+second;
	printf("NOTE:FIRST 3 NUMBER OF FIBONACCI SERIES ARE WRITTEN AUTOMATICLY\n\n");
	printf("PLEASE ENTER STEP NUMBER:");
	scanf("%d",&i);
	printf("\n\n%d %d %d",first,second,fibonacci);
	
	for(i;i>0;i--)
	{
		first=second;
		second=fibonacci;
		fibonacci=first+second;
		printf(" %d",fibonacci);
	}
	
	return 0;
}
