#include<stdio.h>

int main(){
	
	int arraysize,i,j;
	
	printf("PLEASE ENTER ARRAY SIZE:");
	scanf("%d",&arraysize);
	
	int array[arraysize];
	
	for(i=0;i<arraysize;i++)
	{
		printf("ENTER %d NUMBER:",i+1);
		scanf("%d",&array[i]);
	}
		
	j=arraysize-1;
	for( i=0;i<arraysize/2;i++)
	{
		array[i] = array[i] + array[j];
		array[j] = array[i] - array[j];
		array[i] = array[i] - array[j];
		j--;
	}

		
		for(i=0;i<arraysize;i++)
		{
			printf("RESULT:%d",array[i]);
			
		}
		
	return 0;
}
