#include<stdio.h>
int RecFindArmstrong(int,int);
void main(){
	int num;
	printf("TO SEE ENTERED NUMBER WHETHER ARMSTRONG OR NOT ENTER: ");
	scanf("%d",&num);
	switch(RecFindArmstrong(num,num)){
		case 0:
			printf("THIS NUMBER IS NOT AN ARMSTRONG NUMBER:%d",num);
			break;
		case 1:
			printf("THIS NUMBER IS AN ARMSTRONG NUMBER:%d",num);
			break;
	}
}
int RecFindArmstrong(int num,int backup){
	static int control=0;
	if(num==0){
		if(control==backup) return 1;
		else return 0;
	}
		control+=pow((num%10),3);
		RecFindArmstrong(num/10,backup);
	}
