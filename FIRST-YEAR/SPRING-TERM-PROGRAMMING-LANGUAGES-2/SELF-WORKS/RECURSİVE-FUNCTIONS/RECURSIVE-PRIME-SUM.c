#include<stdio.h>
int RecPrimeSum(int num){
	static int sum=0;
	int i;
	if(num==2){
		return sum+2;
	}
	else{
		for(i=9;i>1;i--){
			if(num<10&&num==i)
				i--;
			if(num%i==0)
				break;
			if(i==2)
				sum+=num;
		}
		RecPrimeSum(num-1);
	}				
}
int main(){
	int num;
	printf("TO CALCULATE SUM OF ALL PRIME NUMBERS BETWEEN 1 TO N ENTER N:");
	scanf("%d",&num);
	printf("RESULT: %d",RecPrimeSum(num));
	return 0;
}
