#include<stdio.h>

int main(){
	
	//100 means how many number that you can enter numbernum means items for array 
	//and i means order of items 0 1 2 3 etcetera.
	float number[100];
	float result;
	int numbernum,i,j,k,fac;
	char operatoR;
    printf("CHOOSE AN OPERATOR\n'+'  '-'  '/' '*'  mod'm'  factoriel'f':");
	scanf("%s",&operatoR);
	/*for(i=0;i<numbernum;i++)
	{
		printf("PLEASE ENTER %d. NUMBER:",i+1);
		scanf("%d",&number[i]);
	}
	
	for(i=0;i<numbernum;i++)
	{
	printf("%d\n",number[i]);
	}
	*/
	
	switch(operatoR)
	{
			
			case '+':
					printf("HOW MANY NUMBER WILL YOU USE:");
	scanf("%d",&numbernum);
				
				
				for(i=0;i<numbernum;i++)
		{
			printf("PLEASE ENTER %d. NUMBER:",i+1);
			scanf("%f",&number[i]);
		}
		result=0;
		for(i=0;i<numbernum;i++)
		{
		result=result+number[i];
		}
		printf("RESULT:%f",result);
	break;	
		case '-':
					printf("HOW MANY NUMBER WILL YOU USE:");
	scanf("%d",&numbernum);
				
				
				for(i=0;i<numbernum;i++)
		{
			printf("PLEASE ENTER %d. NUMBER:",i+1);
			scanf("%f",&number[i]);
		}
		result=0;
		for(i=0;i<numbernum;i++)
		{
		result=result-number[i];
		}
		printf("RESULT:%f",result);
	break;	
		case '/':
					printf("HOW MANY NUMBER WILL YOU USE:");
	scanf("%d",&numbernum);
				
				for(i=0;i<numbernum;i++)
		{
			printf("PLEASE ENTER %d. NUMBER:",i+1);
			scanf("%f",&number[i]);
			if(number[i]==0){
			printf("NUMBERS CAN NOT BE DIVIDE 0\n");
			break;
			}
		}
			
			result=number[0];
			i=0;
			
				for(j=0;j<numbernum-1;j++)
				{
				i++;
				result=result/number[i];
				}
			
			printf("RESULT:%f",result);
	        
	 break;
	 
	 case '*':
	 	printf("HOW MANY NUMBER WILL YOU USE:");
	scanf("%d",&numbernum);
				
				
				for(i=0;i<numbernum;i++)
		{
			printf("PLEASE ENTER %d. NUMBER:",i+1);
			scanf("%f",&number[i]);
		}
		result=1;
		for(i=0;i<numbernum;i++)
		{
		result=result*number[i];
		}
		printf("RESULT:%f",result);
	break;
	case 'm':
		
	
				
				
				for(i=0;i<2;i++)
		{
			printf("PLEASE ENTER %d. NUMBER:",i+1);
			scanf("%f",&number[i]);
		}
		result=number[0];
		while(result>=0)
		{
		
			
				
			
			result=result-number[1];
		
		}
			result=result+number[1];

			printf("RESULT:%f",result);
		
	break;
		case 'f':
			printf("PLEASE ENTER A NUMBER TO CALCULATE ITS FACTORIEL: ");
			scanf("%d",&fac);
			result=1;	
			for(fac;fac>0;fac--)
			{
			
			result=fac*result;
				
				
			}
		
			printf("RESULT:%f",result);
			break;	
			
	 default:
		printf("WRONG OPERAND");
	}
	
	
	
	
	return 0;
}
