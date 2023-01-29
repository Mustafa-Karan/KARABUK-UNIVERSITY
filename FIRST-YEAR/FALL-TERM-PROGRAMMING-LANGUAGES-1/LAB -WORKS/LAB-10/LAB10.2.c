#include<stdio.h>
#include<math.h>
int main(){
	float xsquare,square[10];
	int i,j;
	j=0;
	for(i=0;i<10;i++){
		printf("ENTER %d. VALUE:",i+1);
		scanf("%f",&square[i]);
		if(square[i]==-1){
			break;
		}
	}
	for(i=0;i<10;i++){
		if(square[i]==-1)
			break;
		xsquare=pow(square[i],2);
		printf("RESULT %d:%f\n",i+1,xsquare);
	}
	
	
	
	
	return 0;
}
