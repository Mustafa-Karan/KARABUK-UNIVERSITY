#include<stdio.h>
int RecHighestCommonFac(int num,int num2){
	static int prime=1;
	if(prime%num==0&&prime%num2==0)
		return prime ;
	else {
		prime++;
		RecHighestCommonFac(num,num2);
	}
}1
int main(){
	int num,num2,temp;
	printf("TO FIND HCF ENTER TWO NUMBER\n");
	printf("NUMBER 1:"); scanf("%d",&num);
	printf("NUMBER 2:"); scanf("%d",&num2);
	printf("HCF IS:%d",RecHighestCommonFac(num,num2));
	return 0;
}
