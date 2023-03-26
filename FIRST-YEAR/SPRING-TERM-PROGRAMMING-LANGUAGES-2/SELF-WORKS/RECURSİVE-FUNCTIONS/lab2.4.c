#include<stdio.h>

int commondivisor(int x,int y){
	
	static int cd=1,counter=1;
	
	if(counter>x||counter>y)
		return cd;
	
	else{
		if(x%counter==0&&y%counter==0){
			cd*=counter;
			x/=counter; y/=counter;
			counter++;
			return commondivisor(x,y);
		}	
		else
			counter++;
			return commondivisor(x,y);
	}
}

int main(){
	int x,y;
	printf("ENTER TWO NUMBER TO FIND COMMON DIVISOR\n");
	printf("1.NUMBER:");
	scanf("%d",&x);
	printf("2.NUMBER:");
	scanf("%d",&y);
	printf("COMMON DIVISOR IS:%d",commondivisor(x,y));
	return 0;
}
