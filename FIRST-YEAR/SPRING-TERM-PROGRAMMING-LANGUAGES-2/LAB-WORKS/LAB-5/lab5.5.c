#include<stdio.h>
void swap(int *num1,int *num2,int *num3){
	int temp;
	temp=*num1;
	*num1=*num3;
	*num3=*num2;
	*num2=temp;	
}
int main(){
	int num1=5,num2=6,num3=7;
	printf("NUM1:%d\nNUM2:%d\nNUM3:%d\n",num1,num2,num3);
	swap(&num1,&num2,&num3);
	printf("AFTER SWAPPING");
	printf("\nNUM1:%d\nNUM2:%d\nNUM3:%d",num1,num2,num3);
	return 0;
}
