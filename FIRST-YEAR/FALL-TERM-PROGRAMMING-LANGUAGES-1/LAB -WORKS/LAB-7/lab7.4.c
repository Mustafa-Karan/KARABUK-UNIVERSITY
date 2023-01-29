#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r,area,perimeter,pi;
	int a;
	
	pi=3.14;
	
	printf("TO CALCULATE AREA OR PERIMETER OF A CIRCLE PLEASE CHOOSE");
	printf("\n\nFOR PERIMETER ENTER 1,FOR AREA ENTER 2\n:");
	scanf("%d",&a);
	
	
	
	if(a==1)
	{
		
		printf("ENTER THE RADIUS OF CIRCLE:");
	    scanf("%f",&r);
		perimeter=2*pi*r;
		printf("PERIMETER IS:%f",perimeter);
	}
	
	if(a==2)
	{
		printf("ENTER THE RADIUS OF CIRCLE:");
	    scanf("%f",&r);
		area=pi*r*r;
		printf("AREA IS:%f",area);
	}
	
	if(a!=1&&a!=2)
	{
		printf("WRONG INPUT");
	}
	return 0;
}
