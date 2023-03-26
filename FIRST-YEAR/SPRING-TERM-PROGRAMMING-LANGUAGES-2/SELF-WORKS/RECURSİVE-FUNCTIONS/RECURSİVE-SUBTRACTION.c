#include<stdio.h>
int RecursiveSubtraction(int n,int x){
	if(x==0)
		return n;
	return RecursiveSubtraction(n-1,x-1);
}
int main(){
	int num,num2;
	printf("ENTER TWO NUMBER TOO SUBTRACT\n");
	printf("NUM 1:");
	scanf("%d",&num);
	printf("NUM 2:");
	scanf("%d",&num2);
	printf("RESULT:%d",RecursiveSubtraction(num,num2));
	return 0;
}
