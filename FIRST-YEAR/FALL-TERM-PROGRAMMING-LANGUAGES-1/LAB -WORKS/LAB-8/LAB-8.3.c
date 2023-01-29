#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s1;
	printf("SAYIYI GIRINIZ:");
	scanf("%d",&s1);
	if(s1%2==0)
	{
		printf("SAYI CIFTTIR");
	
	}
	else{
		printf("SAYI TEKTIR");
	}	
		
	return 0;
}
