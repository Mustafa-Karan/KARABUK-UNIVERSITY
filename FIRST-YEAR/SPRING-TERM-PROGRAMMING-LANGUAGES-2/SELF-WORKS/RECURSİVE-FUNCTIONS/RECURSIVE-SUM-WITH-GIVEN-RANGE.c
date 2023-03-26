#include<stdio.h>
int RecSum(int x,int y){
	if(x==y)
		return ;
	else
		return (x+RecSum(x-1,y));
}
int main(){
	int x,y,temp;
	printf("TO CALCULATE SUM OF GIVEN RANGE ENTER TWO NUMBER\n");
	printf("NUMBER 1:");
	scanf("%d",&x);
	printf("NUMBER 2:");
	scanf("%d",&y);
	if(x<y){
		temp=y;
		y=x;
		x=temp;
	}
	printf("SUM :%d",RecSum(x,y));
	return 0;
}
