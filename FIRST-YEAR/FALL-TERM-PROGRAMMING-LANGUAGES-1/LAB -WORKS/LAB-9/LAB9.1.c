#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s1,s2,s3;
	
	printf("****ENTER THE NUMBERS TO COMPARE WHICH ONE IS THE BIGGEST****\n\n\n");
	
	printf("FIRST NUMBER:");
	scanf("%d",&s1);
	
	printf("SECOND NUMBER:");
	scanf("%d",&s2);
	
	printf("THIRD NUMBER:");
	scanf("%d",&s3);
	
	if(s1>s2&&s1>s3)
	{
		printf("THE BIGGEST IS:%d",s1);
		
	}
	
	if(s2>s1&&s2>s3)
	{
	    printf("THE BIGGEST IS:%d",s2);
	}
	if(s3>s1&&s3>s2)
	{
		printf("THE BIGGEST IS:%d",s3);
	}
	return 0;
}
