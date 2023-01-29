#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float feet,islem;
	printf("FEET OLARAK DEGERI GIRINIZ:");
	scanf("%f",&feet);
	islem=feet*30.48;
	printf("GIRILEN DEGERIN CM KARSILIGI:%f",islem);
	
	return 0;
}
