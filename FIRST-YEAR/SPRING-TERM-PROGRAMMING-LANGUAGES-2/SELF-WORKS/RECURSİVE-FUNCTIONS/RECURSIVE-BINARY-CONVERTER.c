#include<stdio.h>
long RecBin(int);
int main(){
	int num;
	printf("TO CONVERT BINARY FORM PLEASE ENTER A NUMBER:");
	scanf("%d",&num);
	printf("RESULT:%ld",RecBin(num));
	return 0;
}
long RecBin(int num){
	static long result=0;
	if(num==0)
		return result;
	else
		return (RecBin(num/2),result=result*10+(num%2));
}
