#include<stdio.h>
RecPrintTriangle(int num,int choice){
	static int counter=0;
	int i;
	switch(choice){
		case 1:
			if(num==0)
				return;
			RecPrintTriangle(num-1,choice);
			for(i=num;i>0;i--)
				printf("*");
			printf("\n");
			break;
		case 0:
			if(num==0)
				return;
			counter++;
			RecPrintTriangle(num-1,choice);
			for(i=counter;i>0;i--)
				printf(" ");
			for(i=num;i>0;i--)
				printf("*");
			printf("\n");
			counter--;
			break;
	}
}
int main(){
	int num,choice;
	printf("ENTER E ROW NUMBER TO PRINT TRIANGLE:");
	scanf("%d",&num);
	printf("1 IS NORMAL 0 IS REVERSE CHOOSE ONE AND ENTER:");
	scanf("%d",&choice);
	RecPrintTriangle(num,choice);
	return 0;
}
