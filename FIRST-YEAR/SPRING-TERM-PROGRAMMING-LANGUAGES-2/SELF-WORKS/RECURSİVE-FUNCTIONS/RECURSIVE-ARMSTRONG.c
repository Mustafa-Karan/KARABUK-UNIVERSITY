#include<stdio.h>
void RecPrintArmstrong(int);
void main(){
	int num;
	printf("TO SEE ARMSTRONG NUMBERs 1 TO N ENTER N : ");
	scanf("%d",&num);
	RecPrintArmstrong(num);	
}
void RecPrintArmstrong(int num){
	static int backup=1;
	static int controlnum,controlnum2;
	if(backup>=num){
		return;	
	}
	else{
		controlnum=backup; controlnum2=0;
		while(controlnum>0){
		controlnum2+=pow((controlnum%10),3);
		controlnum/=10;
		}
		if(controlnum2==backup)
			printf("THIS NUMBER IS ARMSTRONG:%d\n",controlnum2);
		backup+=1;
		RecPrintArmstrong(num);
	}
}
