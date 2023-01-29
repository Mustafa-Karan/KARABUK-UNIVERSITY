#include<stdio.h>

int main(){
	
	float area,perimeter,min,max;
	printf("****RECTANGLE AREA AND PERIMETER CALCULATOR****\n\n");
	printf("PLEASE ENTER SHORT SIDE OF REACTANGLE:");
	scanf("%f",&min);
	printf("PLEASE ENTER LONG SIDE OF RECTANGLE:");
	scanf("%f",&max);
	area=min*max;
	perimeter=2*min+2*max;
	printf("AREA:%f",area);
	printf("\nPERIMETER:%f",perimeter);
	
	
	return 0;
}
