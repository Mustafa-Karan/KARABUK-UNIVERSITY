//Write C program to add two Complex Numbers by passing structure to a function. (In this example, you 
//should take two complex numbers as structures and add them by creating a user-defined function.)
#include<stdio.h>
struct complex{
	float realpart;
	float virtualpart;
};
//typedef struct complex st;
void sumfunc(float,float,float,float);

void main(){
	struct complex numbers[2];
	int i=0;
	for(i;i<2;i++){
		printf("ENTER %d. NUMBER'S REAL PART:",i+1);
		scanf("%f",&numbers[i].realpart);
		printf("ENTER %d. NUMBER'S VIRTUAL PART:",i+1);
		scanf("%f",&numbers[i].virtualpart);
	}
	sumfunc(numbers[0].realpart,numbers[0].virtualpart,numbers[1].realpart,numbers[1].virtualpart);
}
void sumfunc(float a,float b,float c,float d){
	printf("RESULT:%fi+%f",a+c,b+d);
}
