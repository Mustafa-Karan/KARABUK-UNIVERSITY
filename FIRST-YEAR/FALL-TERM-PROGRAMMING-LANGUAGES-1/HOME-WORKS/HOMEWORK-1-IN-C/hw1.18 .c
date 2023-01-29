#include <stdio.h>

int main() {
	
	
	//IT WORKS for 5 digits numbers for example 99999 and some 6 digits numbers for example 123456 or 499999 
	
   long long num,a,b,c;
   
    printf("ENTER A NUMBER TO CONVERT BINARY:");
	scanf("%d",&num);
	b=0;
	c=1;
  
  while(num!=0)
	{
		a=num%2;
		num=num/2;
		b += a*c;
		c=c*10;
	}

   	printf("\nIN BINARY:%lld",b);

	return 0;
}
