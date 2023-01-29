#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,first,last;
	
	printf("ENTER A NUMBER TO SEE FIRST AND LAST DIGIT:");
	scanf("%d",&num);
	printf("\n");
	
	last=num%10;
	
    while(num>0)
	{
		first=num/10;
		num=first;
		if(num>0&&num<10)
		{
	      printf("FIRST DIGIT IS:%d",first);
			
		}
	}
    printf("\n");
	
	printf("LAST DIGIT IS:%d",last);
	return 0;
}
