#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temprature,islem;
	printf("CELCIUS DEGERINI GIRINIZ:");
	scanf("%f",&temprature);
	islem=(9/5)*temprature+32;
	printf("GIRILEN DEGERIN FAHRENHEIT KARSILIGI:%f",islem);
	return 0;
}
