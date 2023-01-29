#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//the program that finds divisible numbers between low and high, div is given by the user also low and high entered 
	//EXCEPT the number that the user does not want to be written on the screen
	int a,b,c,d,e;
	
	printf("ENTER THE LOW VALUE:");
	scanf("%d",&a);
	
	printf("ENTER THE HIGH VALUE:");
	scanf("%d",&b);
	
	printf("DIVISION:");
	scanf("%d",&e);
	
	printf("EXCEPT:");
	scanf("%d",&c);
	
	
	
	while(a<=b)
	{
    	d=a%e;
    	if(d==0&&a!=c)
    	{
    	  printf(" %d\n",a);
		}
		
    	a++;
	}
	return 0;
}
