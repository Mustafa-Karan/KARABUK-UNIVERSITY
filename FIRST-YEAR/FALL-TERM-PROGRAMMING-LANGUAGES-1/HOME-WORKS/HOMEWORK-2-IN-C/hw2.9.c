#include<stdio.h>

int main(){
	int num,backup,sum=0,nummod,nummodcube;
	printf("TO CHECK WHETHER A NUMBER ARMSTRONG OR NOT ENTER:");
	scanf("%d",&num);
	backup=num;
	while(num>0){
		nummod=num%10;
		num=num/10;
		nummodcube=nummod*nummod*nummod;
		sum=sum+nummodcube;
	}
	if(backup==sum)
	printf("THIS NUMBER IS AN ARMSTRONG NUMBER:%d",backup);
	else
	printf("THIS NUMBER IS NOT AN ARMSTRONG NUMBER:%d",backup);
	return 0;
}
