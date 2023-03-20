#include<stdio.h>
int MaxOfArray(int [],int);

int main(){
	int A[]={123,325,12,235,124},i=5;
	printf("MAX OF GIVEN ARRAY IS:%d",MaxOfArray(A,i));
	return 0;
}
int MaxOfArray(int a[],int i){
	int max;
	if(i==1)
		return;
	else
		max=(MaxOfArray(a,i-1));
	if(a[i-1]>=max)
		return a[i-1];
	else
		return max;
}
