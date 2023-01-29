#include<stdio.h>

int main(){
	
	float num[10];
	float numswap[10];
	int number,nummod,i,j;
	for(i=0;i<10;i++)
	{
	printf("PLEASE ENTER %d NUMBER:",i+1);
	scanf("%f",&num[i]);
	}
	printf("\n\n");
	i--;
	for(j=0;j<10;j++)
	{
		numswap[j]=num[i];
		printf("SWAPPED NUMBER %d:%f\n",j+1,numswap[j]);
		i--;
	}
		
	return 0;
}
		
	
		
		
		
	
