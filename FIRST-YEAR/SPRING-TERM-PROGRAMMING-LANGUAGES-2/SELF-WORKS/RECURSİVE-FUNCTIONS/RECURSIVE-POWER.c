#include<stdio.h>
int RecPow(int num1,int num2){
	static int result=1;	
	if(num2==0)	return result;
	else{
		result*=num1;
		RecPow(num1,num2-1);
    }
}
int main(){
	int num1,num2;
	printf("TO CALCULATE POWER OF NUMBER ENTER\n");
	printf("NUMBER:"); scanf("%d",&num1);
	printf("POWER:"); scanf("%d",&num2);
	printf("RESULT:%d",RecPow(num1,num2));
	return 0;
}
