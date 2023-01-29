#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a,b,sum;
	b=2;
	sum=0;
	
	printf("ENTER A POZITIVE NUMBER:");
	scanf("%f",&a);
	
	for(b;b<=a;b+=2)
	{
	sum=sum+(1/b);
    }
	
	printf("SUMMARY:%f",sum);
	
	
	return 0;
}
