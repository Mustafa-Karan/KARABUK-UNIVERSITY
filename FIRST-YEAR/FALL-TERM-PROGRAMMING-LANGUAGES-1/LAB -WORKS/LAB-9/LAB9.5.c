#include<stdio.h>

int main(){
	// to calculate [1+x+x^2/2!+x^3/3!+....] this series  
    //y=exponentiation 
	// if I don't assign factoriel and y in first for loop you can not find the result true.
	
	float x,step,factoriel,sum,y,i,j,k;
	
	printf("TO CALCULATE [1+x+x^2/2!+x^3/3!+....] THIS SERIES\n\n");
	printf("ENTER THE X VALUE:");
	scanf("%f",&x);
	printf("ENTER THE STEP NUMBER:");
	scanf("%f",&step);
	
	step=step-1;
	sum=1;
	i=step;
	
	
	for(i;i>0;i--){
	y=1;
	factoriel=1;
		
		for(j=i;j>0;j--){
			y=x*y;
		}
		for(k=i;k>0;k--){
			factoriel=factoriel*k;
		}	
		sum=sum+(y/factoriel);
		}
	
	printf("%f",sum);
		
	   return 0;
}
		
	
	

	
