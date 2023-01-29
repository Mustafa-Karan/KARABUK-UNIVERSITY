#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("2 SAYI DEGERI ARASINDA ISTEDIGINIZ SAYIYA BOLUNEN\n SAYILARI BULMAK ICIN DEGERLERI SIRAYLA GIRINIZ\n\n");
	
	printf("TABAN:");
	scanf("%d",&a);

	printf("\nTAVAN:");
	scanf("%d",&b);
	
	printf("\nBOLUM:");
	scanf("%d",&c);
	
	for(a;b>=a;a++)
	{
		if(a%c==0)
		{
		printf(" %d",a);
	    }
	
	}
	return 0;
}
