#include<stdio.h>
int RecEvenNum(int x, int y){
	static int sum=0;
	if(x>y)
		return sum;
	else{
		if(x%2==0){
			printf("%d\n",x);
			sum+=x;
		}
		RecEvenNum(++x,y);
		return sum;
	}
}
int main(){
	int number1,number2,result,temp;
	printf("TO FIND EVEN NUMBERS BETWEEN GIVEN NUMBER PLEASE ENTER\n");
	printf("NUMBER 1:");
	scanf("%d",&number1);
	printf("NUMBER 2:");
	scanf("%d",&number2);
	if(number1>number2){
		temp=number1;
		number1=number2;
		number2=temp;
	}
	printf("RESULT IS:%d",result=RecEvenNum(number1,number2));
}
