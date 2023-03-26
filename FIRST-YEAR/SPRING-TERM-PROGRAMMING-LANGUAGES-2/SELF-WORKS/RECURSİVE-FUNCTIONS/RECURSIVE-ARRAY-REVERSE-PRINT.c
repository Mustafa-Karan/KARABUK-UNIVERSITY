#include<stdio.h>
int RecArrayPrint(int a[],int y){
	if(y==0)
		return;
	else{
		printf("%d\n",a[y-1]);
		return RecArrayPrint(a,y-1);
		}
	
	}
int main(){
	int A[10],y=10,i;
	for(i=0;i<y;i++){
		printf("ENTER %d. NUMBER:",i+1);
		scanf("%d",&A[i]);
	}
	RecArrayPrint(A,y);
	return 0;
}
