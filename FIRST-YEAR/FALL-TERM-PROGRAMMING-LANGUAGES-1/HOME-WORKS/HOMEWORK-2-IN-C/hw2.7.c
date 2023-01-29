#include<stdio.h>

int main(){
	int num1,num2,i,j,nummod;
	num2=10;
	printf("TO FIND PRIME NUMBERS BETWEEN 1 TO N ENTER N:");
	scanf("%d",&num1);

	if(num1>7)
	{

		printf("THIS NUMBER IS PRIME:2\n");
		printf("THIS NUMBER IS PRIME:3\n");
		printf("THIS NUMBER IS PRIME:5\n");
		printf("THIS NUMBER IS PRIME:7\n");

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
			    printf("THIS NUMBER IS PRIME:%d\n",num2);

			}

			num2++;
		}

	}

	if(num1<=7){
	switch(num1){

	case 7:

		printf("THIS NUMBER IS PRIME:2\n");
		printf("THIS NUMBER IS PRIME:3\n");
		printf("THIS NUMBER IS PRIME:5\n");
		printf("THIS NUMBER IS PRIME:7\n");
		break;
	case 6:

		printf("THIS NUMBER IS PRIME:2\n");
		printf("THIS NUMBER IS PRIME:3\n");
		printf("THIS NUMBER IS PRIME:5\n");
		break;
	case 5:

		printf("THIS NUMBER IS PRIME:2\n");
		printf("THIS NUMBER IS PRIME:3\n");
		printf("THIS NUMBER IS PRIME:5\n");
		break;

	case 4:

		printf("THIS NUMBER IS PRIME:2\n");
		printf("THIS NUMBER IS PRIME:3\n");
		break;
	case 3:

		printf("THIS NUMBER IS PRIME:2\n");
		printf("THIS NUMBER IS PRIME:3\n");
		break;

	case 2:

		printf("THIS NUMBER IS PRIME:2\n");
	    break;
	default:
		printf("THERE IS NO PRIME NUMBER 1 TO %d",num1);
		break;
	}


	}
	return 0;
}
