#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r,pi,alan;
	pi=3.14;
	printf("ALANINI BULMAK ISTEDIGINIZ CEMBERIN YARICAPINI GIRINIZ:");
	scanf("%d",&r);
	alan=pi*r*r;
	printf("ALAN:%d",alan);
	return 0;
}
