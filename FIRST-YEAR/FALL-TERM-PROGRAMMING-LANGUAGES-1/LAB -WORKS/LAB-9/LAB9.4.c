#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,revnum,backupnum,first,last;
	revnum=0;
	
	printf("ENTER A NUMBER TO CHECK WHETHER IS PALINDROME OR NOT:");
	scanf("%d",&num);
	
	backupnum=num;
	
	while(num>0)
	{
		last=num%10;
		num=num/10;
		revnum=(10*revnum)+last;
	}
		
	
	if(backupnum==revnum)
	{
	printf("\nTHE NUMBER IS PALINDROME:%d",revnum);
	}
		
    else
    {
    	printf("\nTHE NUMBER IS NOT PALINDROME:%d",revnum);
	}
	
	return 0;
}
