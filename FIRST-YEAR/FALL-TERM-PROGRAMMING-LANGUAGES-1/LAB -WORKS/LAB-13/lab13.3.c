#include<stdio.h>
void evenodd(int);
void main(){
	int num;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);
	evenodd(num);
}
void evenodd(int num){
	if(num%2==0)
	printf("THIS NUMBER IS EVEN");
	else
	printf("THIS NUMBER ODD");
}
