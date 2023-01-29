#include<stdio.h>

int main(){
	long long number,num,div,mod,i,final;
	printf("TO CHECK A NUMBER PERFECT NUMBER OR NOT BETWEEN 1 TO N ENTER A NUMBER:");
	scanf("%lld",&number);
	for(num=1;num<=number;num++)
	{
		div=1;
		final=0;
		for(div;div<num;div++)
		{
			mod=num%div;
			if(mod==0)
			{
				final=final+div;
			}
		}
		if(num==final)
		printf("THIS NUMBER IS ONE OF THE PERFECT NUMBERS:%lld\n",num);
		
	}
	
	return 0;
}
