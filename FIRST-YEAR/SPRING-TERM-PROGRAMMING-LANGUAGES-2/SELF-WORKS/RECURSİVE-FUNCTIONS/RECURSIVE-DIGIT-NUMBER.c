#include<stdio.h>
int RecFindDigit(int num){
	if(num<10)
		return 1;
	else{
		return(1+RecFindDigit(num/10));
	}
}
int main(){
	int num;
	printf(	"TO FIND HOW MUCH DIGITS OF GIVEN NUMBER PLEASE ENTER A NUMBER:");
	scanf("%d",&num);
	printf("%d DIGIT IN THIS NUMBER",RecFindDigit(num));
	return 0;
}
