#include<stdio.h>

int main(){
	int i;
	printf("BETWEEN 100 TO 200 THE PROGRAM FINDS NUMBERS THAT DIVISIBLE BY 9\n");
	for(i=100;i<=200;i++)
	{
		if(i%9==0)
		printf("%d\n",i);
	}
	return 0;
}
