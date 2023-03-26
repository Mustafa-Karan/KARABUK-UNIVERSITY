#include<stdio.h>
void RecPerf(int num){
	static int div=1,sum=0;
	if(div>=num){
		if(sum==num){
			printf("%d IS PERFECT NUMBER",num);
			return;
		}
		else{
			printf("%d IS NOT PERFECT NUMBER",num);
			return;
		}
	}
	else{
		if(num%div==0)
			sum+=div;
			div+=1;
		RecPerf(num);
	}	
}
int main(){
	int num;
	printf("TO SEE ENTERED NUMBER IS PERFECT NUMBER OR NOT PLEASE ENTER:");
	scanf("%d",&num);
	RecPerf(num);
	return 0;
}
