#include<stdio.h>
int armstrong(int);
void prime(int);
void main(){
	int number,result;
	printf("ENTER A NUMBER TO CHECK WHETHER ARMSTRONG OR PRIME:");
	scanf("%d",&number);
	result=armstrong(number);
	if(result==1)
	printf("THE NUMBER IS AN ARMSTRONG NUMBER:%d\n",number);
	if(result==0)
	printf("THE NUMBER IS NOT AN ARMSTRONG NUMBER:%d\n",number);
	prime(number);
}
int armstrong(int number){
	int backup,sum=0,nummod,nummodcube,final;
	backup=number;
	while(number>0){
		nummod=number%10;
		number=number/10;
		nummodcube=nummod*nummod*nummod;
		sum=sum+nummodcube;
	}
	if(backup==sum){
	final=1;
	return final;
	}
	else{
	final=0;
	return final;
	}
}
void prime(int number){
	int i,j;
	for(i=2;i<number;i++){
		if((number%i)==0){
			printf("THE NUMBER IS NOT PRIME %d",number);
			break;
		}
		else if(i+1==number)
		printf("THE NUMBER IS PRIME %d",number);
	}
}
