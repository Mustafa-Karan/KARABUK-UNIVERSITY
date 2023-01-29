#include<stdio.h>

int main(){
	int number,backup,mod,i,factoriel=1,final=0;
	printf("TO CHECK A NUMBER STRONG NUMBER OR NOT ENTER A NUMBER:");
	scanf("%d",&number);
	
	backup=number;
	
	while(number>0)
	{
		mod=number%10;
		number=number/10;
		for(i=mod;i>=1;i--)
		{
			factoriel=factoriel*i;
		}
		final=final+factoriel;
		factoriel=1;
	}
	if(backup==final)
	printf("THIS NUMBER IS ONE OF THE STRONG NUMBERS:%d",backup);
	else
	printf("THIS NUMBER IS NOT ONE OF THE STRONG NUMBERS:%d",backup);
	
	return 0;
}
			
