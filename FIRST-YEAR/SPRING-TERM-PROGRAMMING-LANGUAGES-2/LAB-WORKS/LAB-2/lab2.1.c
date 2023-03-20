#include<stdio.h>

int sum(int num){
	if(num==0)
		return 0;
	return(num+sum(num-1));
}
int main(){
	int num;
	printf("PLEASE ENTER A NUMBER TO FIND SUM OF NUMBERS OF THE ENTERED NUMBER:");
	scanf("%d",&num);
	printf("%d",sum(num));
	return 0;
}
