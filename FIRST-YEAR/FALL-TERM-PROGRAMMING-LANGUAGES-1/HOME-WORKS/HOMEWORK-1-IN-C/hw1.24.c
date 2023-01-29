#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=0 holds frequency of digits (max 10 digits)
	int num,lastdigit,a,b,c,d,e,f,g,h,i,j;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	f=0;
	g=0;
	h=0;
	i=0;
	j=0;
	
	printf("ENTER A NUMBER TO FIND FREQUENCY OF DIGITS IN NUMBER:");
	scanf("%d",&num);
	
	while(num>0)
	{
		lastdigit=num%10;
		num=num/10;
		
		if(lastdigit==1)
		{
			a++;
		}
		
		if(lastdigit==2)
		{
			b++;
		}
		
		if(lastdigit==3)
		{
			c++;
		}
		
		if(lastdigit==4)
		{
			d++;
		}
		
		if(lastdigit==5)
		{
			e++;
		}
		
		if(lastdigit==6)
		{
			f++;
		}
		
		if(lastdigit==7)
		{
			g++;
		}
		
		if(lastdigit==8)
		{
			h++;
		}
		
		if(lastdigit==9)
		{
			i++;
		}
		
		if(lastdigit==0)
		{
			j++;
		}
	}
	printf("\nFREQUENCY OF 1:%d TIMES",a);
	printf("\nFREQUENCY OF 2:%d TIMES",b);
	printf("\nFREQUENCY OF 3:%d TIMES",c);
	printf("\nFREQUENCY OF 4:%d TIMES",d);
	printf("\nFREQUENCY OF 5:%d TIMES",e);
	printf("\nFREQUENCY OF 6:%d TIMES",f);
	printf("\nFREQUENCY OF 7:%d TIMES",g);
	printf("\nFREQUENCY OF 8:%d TIMES",h);
	printf("\nFREQUENCY OF 9:%d TIMES",i);
	printf("\nFREQUENCY OF 0:%d TIMES",j);
	
	
	
	
	
	
	return 0;
}
