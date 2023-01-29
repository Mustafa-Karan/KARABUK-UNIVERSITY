#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
	float feet,calculation;
	
	printf("ENTER THE VALUE AS FEET:");
	scanf("%f",&feet);
	
	calculation=feet*30.48;
	
	printf("GIVEN VALUE IS EQUAL:%f IN CM",calculation);
	
	return 0;
}
