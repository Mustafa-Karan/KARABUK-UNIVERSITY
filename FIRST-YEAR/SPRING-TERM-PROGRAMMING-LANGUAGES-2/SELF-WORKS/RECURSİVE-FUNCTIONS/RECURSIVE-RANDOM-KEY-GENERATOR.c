#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RecRandKey(int digit){
	int choice;
	if(digit==0)
		return;
	else{
		choice=rand()%2;
		switch(choice){
			case 0:
				printf("%c",rand()%256);
				return RecRandKey(digit-1);
			break;
			case 1:
				printf("%d",rand()%10);
				return RecRandKey(digit-1);
			break;
		}
	}
}
int main(){
	int digit;
	srand(time(NULL));
	printf("*** WELCOME TO RANDOM KEY GENERATOR ***\n");
	printf("HOW MUCH DIGIT THAT YOU WANT IN YOUR PERSONAL KEY:");
	scanf("%d",&digit);
	RecRandKey(digit);
	
	
	return 0;
}
