#include<stdio.h>
float ortalama(int,int,int,int,int);
void main(){
	int a,b,c,d,e;
	printf("ENTER 5 NUMBER:\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("MEAN:%f",ortalama(a,b,c,d,e));
}
float ortalama(int a,int b,int c,int d,int e){
	float sum=a+b+c+d+e;
	printf("TOPLAM:%f\n",sum);
	sum=sum/5;
	return sum;
}
