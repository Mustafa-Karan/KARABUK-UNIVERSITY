#include<stdio.h>

int main(){
	int number,div,mod,final=0;
	printf("TO CHECK A NUMBER PERFECT NUMBER OR NOT ENTER A NUMBER:");
	scanf("%d",&number);
	
	for(div=1;div<number;div++)
	{
		mod=number%div;
		if(mod==0)
		{
			final=final+div;
		}
	}
	if(number==final)
	printf("THIS NUMBER IS ONE OF THE PERFECT NUMBERS:%d",number);
	else
	printf("THIS NUMBER IS NOT ONE OF THE PERFECT NUMBERS:%d",number);
	
	return 0;
}
			
		
