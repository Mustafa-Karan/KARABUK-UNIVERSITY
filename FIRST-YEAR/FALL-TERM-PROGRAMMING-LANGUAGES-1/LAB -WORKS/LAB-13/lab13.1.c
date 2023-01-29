#include<stdio.h>
float squarearea(float x);
void main(){
	float side;
	printf("ENTER SIDE:");
	scanf("%f",&side);
	printf("%f",squarearea(side));
}
float squarearea(float x){
	float area;
	area=x*x;
	return area;
}
