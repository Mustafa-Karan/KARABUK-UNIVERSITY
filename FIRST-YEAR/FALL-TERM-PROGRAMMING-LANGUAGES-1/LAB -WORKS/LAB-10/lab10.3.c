#include<stdio.h>

int main(){
	
	int num[5];
	int number,nummod,i;
	printf("PLEASE ENTER MAX 5 DIGITS NUMBER:");
	scanf("%d",&number);
	for(i=0;i<5;i++){
		
		nummod=number%10;
		number=number/10;
		num[i]=nummod;
	}
		printf("ENTERED NUMBER:");
	for(i=i-1;i>=0;i--){
		printf("%d",num[i]);
	}
	return 0;
		
}
