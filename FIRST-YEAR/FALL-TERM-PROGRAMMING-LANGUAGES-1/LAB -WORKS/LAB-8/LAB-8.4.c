#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int temprature;
	printf("GIRDIGINIZ DEGER DONMA NOKTASININ ALTINDAMI USTUNDEMI OGRENMEKMICIN DEGER GIRINIZ:");
	scanf("%d",&temprature);
	
	if(temprature>0)
	{
		printf("SICAKLIK DONMA NOKTASININ USTUNDE");
	}
		
	else if(temprature<0) 
	{
		printf("SICAKLIK DONMA NOKTASININ ALTINDA");
	}
				
	else
	{
		printf("SICAKLIK DONMA NOKTASINDA");
	}
				
	return 0;
}
