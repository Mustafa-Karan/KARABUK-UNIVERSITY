#include<stdio.h>
float RecursiveDivision(float n,float x){
	if(n<x)
		return (n/x);
	return (RecursiveDivision(n-x,x)+1);
}
int main(){
	float num1,num2;
	printf("ENTER TWO NUMBER TO CALCULATE DIVISION\n");
	printf("NUMBER 1:");
	scanf("%f",&num1);
	printf("NUMBER 2:");
	scanf("%f",&num2);
	printf("RESULT:%f",RecursiveDivision(num1,num2));
	
	return 0;
}
