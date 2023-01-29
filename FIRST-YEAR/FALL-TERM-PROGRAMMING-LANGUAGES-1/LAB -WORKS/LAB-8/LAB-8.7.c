#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s1,s2,s3;
	printf("****KARSILASTIRILACAK SAYILARI GIRINIZ****\n\n\n");
	printf("1.SAYI:");
	scanf("%d",&s1);
	printf("2.SAYI:");
	scanf("%d",&s2);
	printf("3.SAYI:");
	scanf("%d",&s3);
	
	if(s1>s2&&s1>s3)
	{
		printf("EN BUYUK:%d",s1);
		
	}
	
	if(s2>s1&&s2>s3)
	{
	    printf("EN BUYUK:%d",s2);
	}
	if(s3>s1&&s3>s2)
	{
		printf("EN BUYUK:%d",s3);
	}
	
	return 0;
}
