#include<stdio.h>

int main(){
	
	int number,reverse=0,mod,i;
	printf("TO CHECK WHETHER A NUMBER PALINDROME OR NOT ENTER A NUMBER:");
	scanf("%d",&number);

for(i=number;i>0;i/=10)
{
	mod=i%10;
	reverse=(reverse*10)+mod;
}
if(reverse==number)
printf("THIS NUMBER IS PALINDROME:%d",number);
else
printf("THIS NUMBER IS NOT PALINDROME:%d",number);
	
	return 0;
}
			
