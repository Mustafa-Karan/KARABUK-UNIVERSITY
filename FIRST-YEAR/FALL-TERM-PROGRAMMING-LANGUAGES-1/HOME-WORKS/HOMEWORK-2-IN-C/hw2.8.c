#include<stdio.h>

int main(){
	int num1,num2,i,j,nummod,sum=17;
	num2=10;
	printf("TO FIND SUMMARY OF PRIME NUMBERS BETWEEN 1 TO N ENTER N:");
	scanf("%d",&num1);
	
	if(num1>7)
	{
		
		num2=10;
		while(num2<=num1)
		{
			for(i=9;i>1;i--)
			{
				nummod=num2%i;
				if(nummod==0){
					break;
					
				}
				else if(i==2)
			    sum=sum+num2;
				
			}
			
			num2++;
		}
		
	printf("SUM=%d",sum);
	}
	if(num1<=7){
	switch(num1){

	case 7:
	    printf("SUM=17");
		
		break;
	case 6:
		printf("SUM=10");
	
		break;
	case 5:
		printf("SUM=10");
		
		break;
	
	case 4:
	    printf("SUM=5");
		break;
	case 3:
	    printf("SUM=5");
		break;
	
	case 2:
	    printf("SUM=2");
	    break;
	default:
		printf("THERE IS NO PRIME NUMBER 1 TO %d",num1);
		break;
	}
	
	
	}
	return 0;
}
