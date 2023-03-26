#include<stdio.h>
void RecFloydsTriangle(int num){
	int i;
	if(num==0)
		return;
	else{
		RecFloydsTriangle(num-1);
		for(i=num;i>0;i--){
			if(i%2==1)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
}
int main(){
	int rownumber;
	printf("ENTER A ROW NUMBER TO PRINT FLOYD'S TRIANGLE:");
	scanf("%d",&rownumber);
	RecFloydsTriangle(rownumber);
	return 0;
}
