#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int temprature;
	
	printf("ENTER THE TEMPERATURE TO FIND IT UNDER THE FREEZING POINT OR NOT:");
	scanf("%d",&temprature);
	
	if(temprature>0)
	{
		printf("GIVEN TEMPERATURE ABOVE THE FREEZING POINT");
	}
		
	else if(temprature<0) 
	{
		printf("GIVEN TEMPERATURE UNDER THE FREEZING POINT");
	}
				
	else
	{
		printf("GIVEN TEMPERATURE AT THE FREEZING POINT ");
	}
	
	return 0;
}
