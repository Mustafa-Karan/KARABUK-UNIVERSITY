#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5},*ptr,i,result=0;
	ptr=arr;
	for(i=0;i<5;i++)
		result+=*(ptr+i);
	printf("RESULT:%d",result);
	return 0;
}
