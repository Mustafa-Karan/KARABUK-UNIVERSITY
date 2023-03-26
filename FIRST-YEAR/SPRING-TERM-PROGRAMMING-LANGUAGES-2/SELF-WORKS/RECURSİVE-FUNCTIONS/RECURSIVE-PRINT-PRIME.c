#include<stdio.h>
void RecPrime(int num){
	int i;
	if(num==2){
		printf("2");
		return;
	}
	else{
		for(i=9;i>1;i--){
			if(num<10&&num==i)
				i--;
			if(num%i==0)
				break;
			if(i==2)
				printf("%d\n",num);
		}
		RecPrime(num-1);
	}				
}
int main(){
	int num;
	printf("TO SEE PRIME NUMBERS 1 TO N ENTER N:");
	scanf("%d",&num);
	RecPrime(num);
	return 0;
}
