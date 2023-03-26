#include<stdio.h>
int RecDivRange(int x,int y,int z){
	if(x==y){
		if(x%z==0){
			printf("%d\n",x);
			return;
		}
		else
			return;
	}
	else{
			if(x%z==0)
			printf("%d\n",x);
		return RecDivRange(x+1,y,z);
	}
}
int main(){
	int x,y,z,temp;
	printf("TO FIND DIVISIBLE NUMBERS BETWEEN GIVEN NUMBER PLEASE ENTER\n");
	printf("NUMBER 1:");
	scanf("%d",&x);
	printf("NUMBER 2:");
	scanf("%d",&y);
	printf("DIVISION:");
	scanf("%d",&z);
	if(x>y){
		temp=y;
		x=y;
		y=temp;
	}
	RecDivRange(x,y,z);
	return 0;
}
