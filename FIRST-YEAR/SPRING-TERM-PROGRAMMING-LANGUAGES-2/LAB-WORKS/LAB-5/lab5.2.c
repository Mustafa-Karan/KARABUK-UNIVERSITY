#include<stdio.h>
int sum(int *,int *);
int main(){
	int num1,num2;
	printf("ENTER TWO NUMBER TO ADD THEM\n");
	printf("NUMBER 1:");
	scanf("%d",&num1);
	printf("NUMBER 2:");
	scanf("%d",&num2);
	printf("RESULT:%d",sum(&num1,&num2));
	return 0;
}
int sum(int *num1,int *num2){
	return *num1+*num2;
}
