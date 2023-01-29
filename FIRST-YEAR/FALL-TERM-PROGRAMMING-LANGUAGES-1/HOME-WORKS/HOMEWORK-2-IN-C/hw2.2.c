#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,a,b,c,delta;
	printf("TO FIND ROOTS==>ax^2+bx+c ENTER 'a' 'b' 'c'\n");
	printf("ENTER 'a':");
	scanf("%f",&a);
	printf("ENTER 'b':");
	scanf("%f",&b);
	printf("ENTER 'c':");
	scanf("%f",&c);
	delta=pow(b,2)-(4*a*c);
	if(delta>0)
	{
	printf("THE EQUATION HAVE TWO REAL ROOT\n");
    x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	printf("DELTA:%f",delta);
	printf("\nX1:%f",x1);
	printf("\nX2:%f",x2);	
	}
	if(delta==0)
	{
	printf("THE EQUATION HAS DOUBLE ROOT\n");
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	printf("DELTA:%f",delta);
	printf("\nX1:%f",x1);
	printf("\nX2:%f",x2);
	}
	if(delta<0)
	{
	printf("THE EQUATION HAVEN'T TWO REAL ROOT\n");
	printf("DELTA:%f",delta);
	
	
	}
	
	
	
	return 0;
}
