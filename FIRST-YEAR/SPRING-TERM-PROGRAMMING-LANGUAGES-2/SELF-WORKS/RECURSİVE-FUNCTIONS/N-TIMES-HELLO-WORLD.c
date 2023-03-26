#include<stdio.h>
void RecHello(int num){
	if(num==0)
		return;
	else
		printf("HELLO WORLD\n");
		RecHello(num-1);
}
int main(){
	int num;
	printf("ENTER A NUMBER TO SEE N TIMES HELLO WORLD ON SCREEN:"); 
	scanf("%d",&num);
	RecHello(num);
	return 0;
}
