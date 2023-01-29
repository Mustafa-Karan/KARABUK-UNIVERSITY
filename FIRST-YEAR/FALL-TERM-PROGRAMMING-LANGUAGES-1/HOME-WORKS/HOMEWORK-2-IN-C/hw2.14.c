#include<stdio.h>

int main(){
	
	int number,backup,mod,i,k,j,factoriel=1,final=0;
	printf("TO CHECK A NUMBER STRONG NUMBER OR NOT 1 TO N ENTER A NUMBER:");
	scanf("%d",&number);

for(j=1;j<=number;j++)
{
    backup=j;
	
	while(backup>0)
	{
		mod=backup%10;
		backup=backup/10;
		for(i=mod;i>1;i--)
		{
			factoriel=factoriel*mod;
		}
		final=final+factoriel;
		factoriel=1;
	}
	if(j==final)
	printf("THIS NUMBER IS ONE OF THE STRONG NUMBERS:%d",j);
	
}
	return 0;
}
	
	

			
