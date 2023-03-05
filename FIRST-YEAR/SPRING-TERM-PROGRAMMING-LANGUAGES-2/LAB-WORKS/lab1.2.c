#include <stdio.h>
int bodyIndex(float,float);
int main(){
	float weight,height;
	int result;
	printf("**** WELCOME TO BODY INDEX CALCULATOR ****\n");
	printf("ENTER YOUR WEIGHT:");
	scanf("%f",&weight);
	printf("ENTER YOUR HEIGHT:");
	scanf("%f",&height);
	result=bodyIndex(weight,height);
	switch(result){
		case 1:
			printf("THIN");
			break;
		case 2:
			printf("NORMAL");
			break;
		case 3:
			printf("FAT");
			break;
		case 4:
			printf("OBESE");
			break;
	}
	return 0;
}
int bodyIndex(float w,float h){
	float BMI;
	BMI=w/(h*h);
	if(BMI>=0&&BMI<19)
	return 1;
	else if(BMI>=19&&BMI<26)
	return 2;
	else if(BMI>=26&&BMI<30)
	return 3;
	else
	return 4;
}
