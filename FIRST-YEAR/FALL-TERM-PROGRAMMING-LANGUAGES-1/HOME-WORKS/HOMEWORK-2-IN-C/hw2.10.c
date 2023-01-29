#include<stdio.h>

int main(){
	int num,backup,nummod,nummodcube,i,sum=0,finalsum=0;
	printf("TO FIND SUM OF ALL ARMSTRONG NUMBERS BETWEEN 1 TO N ENTER N:");
	scanf("%d",&num);
	
	
	for(i=1;i<=num;i++)
	{
		backup=i;
		while(backup>0)
		{
			nummod=backup%10;
			backup=backup/10;
			nummodcube=nummod*nummod*nummod;
			sum=sum+nummodcube;
		}
		if(i==sum)
		finalsum=finalsum+i;
		sum=0;
		
	}
	printf("SUM OF ALL ARMSTRONG NUMBER BETWEEN 1 TO N:%d",finalsum);
	
	
	return 0;
}
