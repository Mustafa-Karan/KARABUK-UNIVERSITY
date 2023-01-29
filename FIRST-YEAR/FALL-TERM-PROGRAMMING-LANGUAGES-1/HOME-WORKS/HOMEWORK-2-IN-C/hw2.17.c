#include <stdio.h>

int main() {
 
   // to display the n terms of harmonic series and their sum. (1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms)
    int stopvalue;
	float sum=0,i;
	printf("TO FIND HARMONIC SERIES (1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n) ENTER A STOP VALUE:");
	scanf("%d",&stopvalue);
	
	for(i=1;i<=stopvalue;i++)
	{
		sum=sum+(1/i);
		printf("%f+",1/i);
	}
	printf("...==>%f",sum);
	return 0;
}
