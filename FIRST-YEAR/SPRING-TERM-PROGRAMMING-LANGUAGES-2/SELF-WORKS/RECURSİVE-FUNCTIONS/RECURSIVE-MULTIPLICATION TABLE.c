#include<stdio.h>
long RecMultTable(long num,long num2){
	int i;
	if(num>num2)
		return ;
	else{
		for(i=0;i<=10;i++)
			printf("%d*%ld=%ld\n",i,num,i*num);
			printf("\n\n");
		return RecMultTable(++num,num2);
	}
}
int main(){
	long num,num2,temp;
	printf("TO PRINT MULTIPLICATION TABLE WITH GIVEN RANGE ENTER TWO NUMBER\n");
	printf("NUMBER 1:");
	scanf("%ld",&num);
	printf("NUMBER 2:");
	scanf("%ld",&num2);
	if(num>num2){
		temp=num;
		num=num2;
		num2=temp;
	}
	RecMultTable(num,num2);
	return 0;
}
