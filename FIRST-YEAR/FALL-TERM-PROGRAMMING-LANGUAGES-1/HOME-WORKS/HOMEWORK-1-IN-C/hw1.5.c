#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float temprature,calculation;
	
	printf("ENTER TEMPERATURE IN CELCIUS:");
	scanf("%f",&temprature);
	
	calculation=(9/5)*temprature+32;
	
	printf("GIVEN TEMPERATURE IS EQUAL:%f IN FAHRENHEIT",calculation);
	
	return 0;
}
