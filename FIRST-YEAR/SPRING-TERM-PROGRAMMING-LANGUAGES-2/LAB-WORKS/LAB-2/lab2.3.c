#include<stdio.h>

int SumOfDigits(int);
int main(){
	int num;
	printf("ENTER A NUMBER TO FIND SUM OF DIGITS:");
	scanf("%d",&num);
	printf("RESULT:%d",SumOfDigits(num));
	return 0;
}
int SumOfDigits(int num){
	if(num<10)
		return num;
	else
		return(num%10+SumOfDigits(num/10));
}
