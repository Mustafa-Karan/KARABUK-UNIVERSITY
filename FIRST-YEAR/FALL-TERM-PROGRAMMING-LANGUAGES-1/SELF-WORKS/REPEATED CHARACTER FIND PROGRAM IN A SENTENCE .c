#include<stdio.h>

int main(){

	int i,j=0,k=0,l=0;
	char control[1000];
	printf("ENTER A SENTENCE:");
	gets(control);
	for(i=0;control[i]!='\0';i++)
	{
		if(control[i]==32)
		{
			for(i;control[i]==32;i++)
			{
				j++;
			}
				
		printf("SPACE CHARACTER IS REPEATED %d TIMES IN A ROW\n",j);
		}
		
		if((control[i]!=32)&&(control[i]==control[i+1]))
		{
			for(k=i;control[k]==control[i];k++)
			{
			l++;
			}
			printf("%c THIS CHARACTER IS REPEATED %d TIMES IN A ROW\n",control[i],l);
			i=k;
			l=0;	
		}
			
    }
	return 0;	
}
