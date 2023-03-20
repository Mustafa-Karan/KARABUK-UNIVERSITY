#include <stdio.h>
int calculate(int,float);
int main(){
	int stdnmb,choice,failedstd;
	float pssnggrde;
	printf("**** WELCOME TO GRADE CALCULATOR ****\n");
	while(1){
	printf("TO CALCULATE ENTER 1 TO EXIT ENTER 0:");
	scanf("%d",&choice);
		switch(choice){
			case 1:
				while(1){
				printf("ENTER STUDENT NUMBER:");
				scanf("%d",&stdnmb);
				if(stdnmb<=100)
					break;
				else
					printf("TRY AGAIN STUDENT NUMBER SHOULD BE UNDER 101\n");
				}
				printf("ENTER PASSING GRADE:");
				scanf("%f",&pssnggrde);
				failedstd=calculate(stdnmb,pssnggrde);
				printf("\nFAILED STUDENT NUMBER:%d\n",failedstd);
			break;
			case 0:
				printf("EXITING...");
			break;
			default:
				printf("WRONG CHOICE\n");
		}
		if(choice==0)
		break;
	}
	return 0;
}
int calculate(int std,float pssgrade){
	float grades[100],sum=0.0;
	int i;
	int fails;
	for(i=0;i<std;i++){
		printf("ENTER %d. STUDENT'S GRADE:",i+1);
		scanf("%f",&grades[i]);
		sum=sum+grades[i];
		if(grades[i]<pssgrade)
			fails++;
	}
	printf("\nCLASS AVERAGE:%f",sum/std);
	return fails;
}
