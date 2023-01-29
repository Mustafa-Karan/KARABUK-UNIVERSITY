#include<stdio.h>

int main(){
	//THE PROGRAM THAT ORDER WORDS WITH USING ALPHABET.
	//IN THIS PROGRAM YOU CAN CONTROL SECOND LETTER OR THIRD BUT YOU HAVE TO ADD ANOTHER ARRAY AND MOVE
	//control[i][j] j++.
	int value;
	printf("HOW MANY WORDS WILL YOU ENTER:");
	scanf("%d",&value);
	int control[value][100];
	char tempchar[100];
	int i,j,k,m,p,o,counter=0;
	for(i=0;i<value;i++)
	{
		printf("ENTER %d. WORD:",i+1);
		scanf("%s",tempchar);
		
			for(j=0;tempchar[j]!='\0';j++)
			{
				control[i][j]=tempchar[j];
			}
				
			for(k=0;k<j;k++)
			{
				tempchar[j]='\0';
			}
		k=0;
		j=0;
	}
	
	j=0;
	m=0;
	for(i=65;i<=90;i++)
	{
		k=0;
		m=0;	
			for(m=0;control[m][j]!='\0';m++)
			{
				if(control[m][j]==i)
				{
					printf("%d.WORD:",counter+1);
					for(k=0;control[m][k]!='\0';k++)
					{
						printf("%c",counter+1,control[m][k]);
					}
				counter++;
				printf("\n");
				}
			
			}		
	
	}
							
	j=0;
	for(o=97;o<=122;o++)
	{
		k=0;
		p=0;	
			for(p=0;control[p][j]!='\0';p++)
			{
				if(control[p][j]==o)
				{
					printf("%d.WORD:",counter+1);
					for(k=0;control[p][k]!='\0';k++)
					{
						printf("%c",control[p][k]);
					}
				counter++;
				printf("\n");
				}
			
			}		
	
	}

	return 0;
}
	
