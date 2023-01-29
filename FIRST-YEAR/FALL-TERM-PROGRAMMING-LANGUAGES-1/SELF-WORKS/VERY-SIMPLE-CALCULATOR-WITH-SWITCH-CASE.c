#include<stdio.h>

int main(){
	
	float num1,num2,calculation;
	char calculationSymbol;
	printf("ENTER FIRST NUMBER:");
	scanf("%f",&num1);
	printf("\nENTER '+' '-' '/' '*' and mod 'm':");
	scanf("%s",&calculationSymbol);
	printf("\nENTER SECOND NUMBER:");
	scanf("%f",&num2);
	
	switch(calculationSymbol)
	{
		case'+':
		calculation=num1+num2;
		printf("\nRESULT:%f",calculation);
		break;
		case'-':
		calculation=num1-num2;
		printf("\nRESULT:%f",calculation);
		break;
		case'/':
		calculation=num1/num2;
		printf("\nRESULT:%f",calculation);
		break;
		case'*':
		calculation=num1*num2;
		printf("\nRESULT:%f",calculation);
		break;
		case'm':
		for(num1;num1>0;num1=num1-num2){
	    }
		num1=num1+num2;
		printf("\nMOD:%f",num1);
		break;
		default:printf("UNDEFINED DECLARATION");
		break;
		
	}
		
	return 0;
}
	
	
	
